// Define pins for ultrasonic and buzzer
int const trigPin = 10;
int const echoPin = 9; 
int const buzzPin = 7;
void setup()
{
pinMode(trigPin, OUTPUT); // trig pin will have pulses output
pinMode(echoPin, INPUT); // echo pin should be input to get pulse width

pinMode(buzzPin, OUTPUT); // buzz pin is output to control buzzering
Serial.begin(9600);
}
void loop()
{
  int duration,distance;
digitalWrite(trigPin,HIGH);
delay(1000);
digitalWrite(trigPin,LOW);
duration = pulseIn(echoPin, HIGH);
    distance = (duration/2) / 29.1;
    if(distance<100 )
    {
       Serial.println("object wasx found");
       tone(buzzPin,400); 
    }
    else if(distance<200)
    {
       tone(buzzPin,300); 
    }
     else if(distance<300)
     {
     tone(buzzPin,200);
    }
}

