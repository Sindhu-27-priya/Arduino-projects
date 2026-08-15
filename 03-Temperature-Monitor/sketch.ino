#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal.h>

// DS18B20 data pin
#define ONE_WIRE_BUS 2

// LCD pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// Create DS18B20 object
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  // Start LCD
  lcd.begin(16, 2);

  // Start temperature sensor
  sensors.begin();

  // Initial message
  lcd.setCursor(0, 0);
  lcd.print("Temperature");
  lcd.setCursor(0, 1);
  lcd.print("Monitor");

  delay(2000);
  lcd.clear();
}

void loop() {
  // Request temperature
  sensors.requestTemperatures();

  // Read temperature in Celsius
  float temperature = sensors.getTempCByIndex(0);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Temperature:");

  lcd.setCursor(0, 1);

  if (temperature == DEVICE_DISCONNECTED_C) {
    lcd.print("Sensor Error");
  } else {
    lcd.print(temperature, 1);
    lcd.print((char)223);  // Degree symbol
    lcd.print("C");
  }

  delay(1000);
}