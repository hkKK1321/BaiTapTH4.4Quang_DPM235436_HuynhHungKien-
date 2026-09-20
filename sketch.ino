const int ldrPin = A0;
const int ledPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.println("=== BAI 4.4: CAM BIEN QUANG LDR ===");
}

void loop() {
  int val = analogRead(ldrPin);
  Serial.print("Muc sang LDR (Analog A0): ");
  Serial.println(val);

  if (val < 500) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(300);
}
