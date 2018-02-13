// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 11; 
int servoPin2 = 10;
int servoPin3 = 9; 
int servoPin4 = 8;
//int servoPin2 = 3;
// Create a servo object 
Servo Servo1; 

Servo Servo2;

 Servo Servo3; 
Servo Servo4; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
   Servo2.attach(servoPin2); 
   Servo3.attach(servoPin3); 
   Servo4.attach(servoPin4); 
      //Servo2.attach(servoPin2);
}
void loop(){ 
 
 
   Servo1.write(90); 
   Servo4.write(00); 
   delay(1000);
   
   
    Servo1.write(00); 
    Servo4.write(180); 

    delay(1000);



    Servo3.write(180); 
   Servo2.write(00); 
   delay(1000);
   
   
    Servo3.write(00); 
    Servo2.write(180); 

    delay(1000);

}
