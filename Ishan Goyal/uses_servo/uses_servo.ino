#include<Servo.h>
Servo servo1;
int a,b,c;
void setup() {
  // put your setup code here, to run once:
servo1.attach(9);
servo1.write(0);
delay(2000);

}

void loop() {
  int n=0;
while(n<15)
{  
servo1.write(n*15);
delay(500);
servo1.write(10);
delay(1000);
n=n+3;
}


}
