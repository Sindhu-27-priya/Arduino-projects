void setup() {
  pinMode(13, OUTPUT);  // Red
  pinMode(12, OUTPUT);  // Yellow
  pinMode(11, OUTPUT);  // Green
}

void loop() {

  // Red ON
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(5000);

  // Yellow ON
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(2000);

  // Green ON
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(5000);
}