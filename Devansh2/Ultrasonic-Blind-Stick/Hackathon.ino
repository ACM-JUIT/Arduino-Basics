int vibr_pin=3;
int LED_Pin=13;
int t = 6;
int e =7;
long k;
int d;
const int buzzer = 9;

void setup() {
  pinMode(vibr_pin,INPUT);
  pinMode(LED_Pin,OUTPUT);

  pinMode(t, OUTPUT);
  pinMode(e, INPUT);
  Serial.begin(9600);

  pinMode(buzzer, OUTPUT);
}

void loop() {
  int val;
  val=digitalRead(vibr_pin);
  if(val==1)
  {
    digitalWrite(LED_Pin,HIGH);
    delay(100);
    Serial.println("vibration");
    delay(100);
    tone(buzzer, 1000, 500);
    delay(100);
    tone(buzzer, 1500, 500);
    delay(100);
    tone(buzzer, 2000,500);
    delay(100); 
   }
   else
   digitalWrite(LED_Pin,LOW);

  digitalWrite(t, LOW);
  delay(2);
  digitalWrite(t, HIGH);
  delay(10);
  digitalWrite(t, LOW);
  k=pulseIn(e, HIGH);
  d=k*0.034/2;
  Serial.print("dist: ");
  Serial.println(d);

    if(d<100)
  {
   tone(buzzer, 1000,500);
   delay(200);
   tone(buzzer);
   delay(200);
  }

  else if(d>100)  
  { 
   
  //tone(buzzer,0,500);
   //noTone(buzzer);
   delay(300);
  }
  
  /*else if(d>300)
  { 
   noTone(buzzer);
   delay(500);
  }
  */
}
