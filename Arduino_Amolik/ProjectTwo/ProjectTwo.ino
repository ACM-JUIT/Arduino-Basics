//Three_LED

int led[3]={3,4,5};
int i;
void setup() {
  for(i=0;i<3;i++) {
  pinMode(led[i],OUTPUT);
  }
}

void loop() {
  for(i=0;i<3;i++) {
  digitalWrite(led[i],HIGH);
  delay(100);
  digitalWrite(led[i],LOW);
  delay(100); 
  }
}
