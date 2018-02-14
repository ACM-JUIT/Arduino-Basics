int sensor1=A0,sensor2=A1,buzzer1=6;

void setup()
{
pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
pinMode(buzzer1,OUTPUT);

Serial.begin(9600);
}
  void loop()
  {
    analogRead(A0);
    analogRead(A1);
    if(sensor1>100)   
{      Serial.println("sensor1");
      digitalWrite(buzzer1,LOW);
    }
    else if(sensor2>=0)
    {
      Serial.println("sensor2");
      digitalWrite(buzzer1,HIGH);
     
      
    }
  }

