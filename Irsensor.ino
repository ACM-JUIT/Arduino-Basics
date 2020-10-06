const int analogInPin = A0;
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(analogInPin);
  Serial.print("\nsensor= ");
  Serial.print(sensorValue);
  if(sensorValue < 100) {
    digitalWrite(13, HIGH);
    Serial.print("\nObject Detected");
  }
  else {
    digitalWrite(13,LOW);
    Serial.print("\no object detected");
  }
  delay(500);
}
