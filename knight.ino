int t=100;
void setup(){
for (int a=2;a<5;a++){
pinMode(a, OUTPUT);
    }
}
void loop(){
for (int a=2;a<5;a++){
digitalWrite(a,HIGH);
delay(t);
digitalWrite(a,LOW);
}
for (int a=4;a>=2;a--){
digitalWrite(a, HIGH);
delay(t);
digitalWrite(a, LOW);
}
}
