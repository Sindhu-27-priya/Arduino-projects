#define LDR_PIN A0
#define RELAY_PIN 8

void setup() {
  pinMode(LDR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, LOW);

  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(LDR_PIN);

  Serial.print("Light Value: ");
  Serial.println(lightValue);

  if (lightValue < 500) {
    // Dark → Lamp ON
    digitalWrite(RELAY_PIN, HIGH);
  } else {
    // Bright → Lamp OFF
    digitalWrite(RELAY_PIN, LOW);
  }

  delay(500);
}