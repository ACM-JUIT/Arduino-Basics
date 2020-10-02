//SoundSensor

int sensorpin=A1;
int sensorvalue=0;

void setup() {
   Serial.begin(9600); //baud_width
}

void loop() {
  sensorvalue=analogRead(sensorpin);
  Serial.println(sensorvalue);
  delay(100);
}
