const int pirPin = 7;  // Connected to HC-SR505 OUT pin

void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
}

void loop() {
  int sensorVal = digitalRead(pirPin);

  if (sensorVal == HIGH) {
    Serial.println("🚨 Motion Detected!");
  } else {
    Serial.println("✅ No Motion");
  }

  delay(1000);
}
