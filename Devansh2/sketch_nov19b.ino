//three light output
int led[4]={3,4,5,6};
int i;

void setup() {
  // put your setup code here, to run once:
  for(i=0;i<4;i++)
  {
  pinMode(led[i],OUTPUT); 
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i+2<6;i++)
  {
  digitalWrite(led[i],HIGH);
  delay(100);
  digitalWrite(led[i+1],HIGH);
  delay(100);
  digitalWrite(led[i+2],HIGH);
  delay(100);
  digitalWrite(led[i],LOW);
  delay(100);
  }

  for(i=4;i+2>0;i--)
  {
  digitalWrite(led[i+2],HIGH);
  delay(100);
  digitalWrite (led[i+1],HIGH);
  delay(100);
  digitalWrite(led[i],HIGH);
  delay(100);
  digitalWrite(led[i+2],LOW);
  delay(100);
  }
}
