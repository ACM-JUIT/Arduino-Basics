int a = 7;  
int b = HIGH;  
void setup(){
  pinMode(led, OUTPUT);
  pinMode(a, INPUT);
  Serial.begin(9600);  
}
void loop(){
 
  b = digitalRead(a); 
  if (b == LOW){
    Serial.println("stop");
    digitalWrite(led, HIGH);
  }
  else{
    Serial.println("go");
    digitalWrite(led, LOW);
  }
  delay(200);
}
