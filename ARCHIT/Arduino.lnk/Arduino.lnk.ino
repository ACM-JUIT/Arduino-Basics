int i=0;
int b=5;

void setup() {
pinMode(b,OUTPUT);
}

void loop() {
 int a=random()%10000;
 int c=random()%3000;
 tone(b,a,1000);
 delay(c);
}
