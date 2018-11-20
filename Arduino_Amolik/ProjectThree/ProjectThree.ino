int led[4]={3,4,5,6};
int a;
int i;

void setup() {
  for(i=0;i<4;i++)
  {
    pinMode(led[i],OUTPUT);
  }
}

void loop() {
  for(i=0;i<4;i++)
  {
    digitalWrite(led[i],HIGH);
    delay(100);
    digitalWrite(led[i],LOW);
    delay(100);
    digitalWrite(led[i+1],HIGH);
    delay(100);
    digitalWrite(led[i+1],LOW);
    delay(100);
    digitalWrite(led[i+2],HIGH);
    delay(100);
    digitalWrite(led[i+2],LOW);
    delay(100);
    
  }
}
