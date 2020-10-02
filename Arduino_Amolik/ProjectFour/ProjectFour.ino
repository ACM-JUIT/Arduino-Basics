//Buzzer with random frequency and random delay

int buz=5,a,c; 

void setup() {
  pinMode(buz,OUTPUT);
}

void loop() {
  a=rand()%10000;
  tone(buz,a,1000);
  c=rand()%2000;
  delay(c);
}
