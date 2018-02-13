float xpin = A1; 
float ypin = A2;
float zpin = A3;                 
void setup(){
  
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  }

void loop(){
  Serial.print(analogRead(xpin));
  Serial.print("\t");
  Serial.print(analogRead(ypin));
  Serial.print("\t");
  Serial.print(analogRead(zpin));
  Serial.println();
  delay(100);
}
