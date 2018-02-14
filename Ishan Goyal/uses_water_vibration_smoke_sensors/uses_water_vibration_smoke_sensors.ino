int a=A0,b=A1,c=8,d,e,f,h;
void setup()
{
  pinMode(a,INPUT);
  pinMode(b,INPUT);
  pinMode(c,INPUT);
Serial.begin(9600);
}

  void loop()
  {
    Serial.print(d); 
    Serial.println(" d is water sensor");
    d=analogRead(a);
    Serial.print(e);
    Serial.println("e is smoke sensor");
    e=analogRead(b);
    Serial.print(f);
    Serial.println("f is vibration sensor");
    f=digitalRead(c);  
  

  }
    

