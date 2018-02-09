int a=A0;
int out;
void setup(){
Serial.begin(9600);
delay(2000);
}
void loop(){
out=analogRead(a);
out=map(out,550,10,0,100);
Serial.print("Mositure : ");
Serial.print(out);
Serial.println("%");
delay(1000);
}
