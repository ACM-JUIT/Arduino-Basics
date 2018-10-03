// Code for random LED blinking using arduino.
void setup() 
{
   for(int i=2;i<=13;i++)
   { 
      pinMode(i, OUTPUT);     //initializing the pins on arduino for output mode
   }
}

void loop() 
{
int j = (rand()%(13-2)+2);    //using random function to glow any LED randomly
      
      digitalWrite(j,HIGH);
      delay(100);
      digitalWrite(j,LOW);  
}
