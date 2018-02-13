// random array blinking.


void setup() {

   for(int i=2;i<=13;i++)
   { pinMode(i, OUTPUT);

   }

   
  // put your setup code here, to run once:

}

void loop() {


int j= (rand()%(13-2)+2);

  

 digitalWrite(j,HIGH);
      delay(100);
 
   delay(100);


}
