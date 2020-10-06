# Ultrasonic Blind Stick
According to the WHO, about 285 million people are estimated to be visually impaired and 39 million are blind worldwide. 
The blind stick , well known in the world as ‘White Cane’, specifically designed for assisting the visually impaired these are longer 
and thinner and allow the user to "feel" the path ahead, but for a really small range.
Is there any better alternative which can solve this trouble?

The UBS is an advanced design integrated with ultrasonic sensor along with buzzer and haptic sensing.  
Our proposed project first uses ultrasonic sensors to detect obstacles ahead using ultrasonic waves and calculates distance .

Our proposed project first uses ultrasonic sensors to detect obstacles ahead using ultrasonic waves. 
On sensing obstacles the sensor passes this data to the arduino. The arduino then processes this data and calculates if the obstacle is close enough. If the obstacle is not that close the circuit does nothing. 
If the obstacle is close it sends a signal to sound a buzzer. 
When the distance reaches for a value greater than the benchmark value then the buzzers sounds with greater intensity.
When the distance reaches for a value less than the benchmark value then the buzzers sounds with lower intensity.

#Arduino Code

Below is the code the project has been operating on using Arduino:

```
int vibr_pin=3;
int LED_Pin=13;
int t = 6;
int e =7;
long k;
int d;
const int buzzer = 9;

void setup() {
  pinMode(vibr_pin,INPUT);
  pinMode(LED_Pin,OUTPUT);

  pinMode(t, OUTPUT);
  pinMode(e, INPUT);
  Serial.begin(9600);

  pinMode(buzzer, OUTPUT);
}

void loop() {
  int val;
  val=digitalRead(vibr_pin);
  if(val==1)
  {
    digitalWrite(LED_Pin,HIGH);
    delay(100);
    Serial.println("vibration");
    delay(100);
    tone(buzzer, 1000, 500);
    delay(100);
    tone(buzzer, 1500, 500);
    delay(100);
    tone(buzzer, 2000,500);
    delay(100); 
   }
   else
   digitalWrite(LED_Pin,LOW);

  digitalWrite(t, LOW);
  delay(2);
  digitalWrite(t, HIGH);
  delay(10);
  digitalWrite(t, LOW);
  k=pulseIn(e, HIGH);
  d=k*0.034/2;
  Serial.print("dist: ");
  Serial.println(d);

    if(d<100)
  {
   tone(buzzer, 1000,500);
   delay(500);
   noTone(buzzer);
   delay(500);
  }

  else if(d<300 && d>100)
  {
    tone(buzzer, 1000,500);
   delay(200);
   noTone(buzzer);
   delay(200);
  }
  
  else if(d>100)  
  { 
   
  //tone(buzzer,0,500);
   //noTone(buzzer);
   delay(300);
  }
  
  /*else if(d>300)
  { 
   noTone(buzzer);
   delay(500);
  }
  */
}
```
