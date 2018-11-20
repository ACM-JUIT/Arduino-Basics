
int sensorpin=A0;
int sensorValue=0;

void setup()
{
  Serial.begin(9600);
  
}


void loop() {
  
 sensorValue=analogRead(sensorpin);
 Serial.println(sensorValue);
 delay(100);
}
