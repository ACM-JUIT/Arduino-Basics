int a=6,b=7,c=8,d=9,e=10,f=11,g=12,h=13;
void setup() {
  // put your setup code here, to run once:
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
pinMode(h,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(a,HIGH);
delay(1000);
digitalWrite(a,LOW);
delay(900);
digitalWrite(b,HIGH);
delay(900);
digitalWrite(b,LOW);
delay(100);
digitalWrite(c,HIGH);
delay(8000);
digitalWrite(c,LOW);
delay(200);
digitalWrite(d,HIGH);
delay(800);
digitalWrite(d,LOW);
delay(300);
digitalWrite(e,HIGH);
delay(700);
digitalWrite(e,LOW);
delay(350);
digitalWrite(f,HIGH);
delay(600);
digitalWrite(f,LOW);
delay(400);
digitalWrite(g,HIGH);
delay(500);
digitalWrite(g,LOW);
delay(500);
digitalWrite(h,HIGH);
delay(400);
digitalWrite(h,LOW);
delay(550);     
}

