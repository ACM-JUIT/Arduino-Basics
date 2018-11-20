//SoundSensor

int Sensorpin=A0;
int Sensor_value=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //baud_cwidth
}

void loop() {
  // put your main code here, to run repeatedly:
  Sensor_value=analogRead(Sensorpin);
  Serial.println(Sensor_value);
  delay(100);
}
