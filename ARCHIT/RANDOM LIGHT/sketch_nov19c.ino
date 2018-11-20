
int a[4]={3,4,5,6};
int r;
void setup() {
  for(int i=0;i<4;i++)
  {
    pinMode(a[i],OUTPUT);
  }
}

void loop()
{
 
   r=random(5);
 for(int i=0;i<4;i++)
 {
  digitalWrite(a[r],HIGH);
  delay(100);
  digitalWrite(a[r],LOW);
  delay(100);
  r=1;
 }
}
