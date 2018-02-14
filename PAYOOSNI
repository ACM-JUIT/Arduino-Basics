#include <LiquidCrystal.h>
 
// A dot is a '1',  A dash '0' -1 is a filler / compensator for the absence of jagged arrays
int letterMorse[][4] = {
  {1, 0, -1, -1},
  {0, 1, 1, 1},
  {0, 1, 0, 1},
  {0, 1, 1, -1},
  {1, -1, -1, -1},
  {1, 1, 0, 1},
  {0, 0, 1, -1},
  {1, 1, 1, 1},
  {1, 1, -1, -1},
  {1, 0, 0, 0},
  {0, 1, 0, -1},
  {1, 0, 1, 1},
  {0, 0, -1, -1},
  {0, 1, -1, -1},
  {0, 0, 0, -1},
  {1, 0, 0, 1},
  {0, 0, 1, 0},
  {1, 0, 1, -1},
  {1, 1, 1, -1},
  {0, -1, -1, -1},
  {1, 1, 0, -1},
  {1, 1, 1, 0},
  {1, 0, 0, -1},
  {0, 1, 1, 0},
  {0, 1, 0, 0},
  {0, 0, 1, 1}
};
 
 
int numberMorse[][5] = {
  { 0, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 1, 0, 0, 0 },
  { 1, 1, 1, 0, 0 },
  { 1, 1, 1, 1, 0 },
  { 1, 1, 1, 1, 1 },
  { 0, 1, 1, 1, 1 },
  { 0, 0, 1, 1, 1 },
  { 0, 0, 0, 1, 1 },
  { 0, 0, 0, 0, 1 }
};
 
//// A dot is a '1',  A dash '0'
//int symbolMorse[][6] = {
//    {0, -1, 0, -1, 0, -1},
//    {0, }
//}
 
int controlPin = 11;
const int standardPauseInMilliseconds = 500;
LiquidCrystal lcd(2, 3, 4, 6, 7, 8, 9);
int backlight = 10;
 
void setup() {
    pinMode(backlight, OUTPUT);
    digitalWrite(backlight, HIGH);
 
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.display();
  // put your setup code here, to run once:
  doMorse("I LOVE ARDUINO");
}
 
void loop() {
}
 
void doMorse(String message)
{
  // put your main code here, to run repeatedly:
  for (int i = 0; i < message.length(); i++)
  {
    char letter = message.charAt(i);
 
    lcd.print(letter);
 
    Serial.println(letter);
 
    if (letter == ' ')
    {
      //Words are separated by a space equal to 7 dots
      delay(standardPauseInMilliseconds * 7);
      continue;
    }
 
    int *component = lookupComponents(letter);
 
    for (int j = 0; j < 4; j++)
    {
 
      int number = component[j];
      if (number < 0) continue;
 
      bool isDot = (number);
 
      Serial.print(isDot ? "Dot- " : "Dash- ");
 
      //For the duration of a dash (0) is 3 times the duration of a dot (1)
      blink(isDot ? standardPauseInMilliseconds : standardPauseInMilliseconds * 3);
      beep(isDot ? standardPauseInMilliseconds : standardPauseInMilliseconds * 3);
 
      //Each dot / dash is followed by a short silence, equal to the dot duration
      delay(standardPauseInMilliseconds);
    }
 
    Serial.println(' ');
 
    //The space between letters is three units
    delay(standardPauseInMilliseconds * 3);
 
  }
}
 
void blink(int delayInMilliseconds)
{
  pinMode(controlPin, OUTPUT);
  //Turn on the light
  digitalWrite(controlPin, HIGH);
  //For the duration of a dash (0) is 3 times the duration of a dot (1)
  delay(delayInMilliseconds);
  digitalWrite(controlPin, LOW);
 
}
 
void beep(int delayInMilliseconds)
{
  pinMode(controlPin, OUTPUT);
  analogWrite(controlPin, 20);
  delay(delayInMilliseconds);
  analogWrite(controlPin, 0);
}
 
 
int * lookupComponents(char letter)
{
    int value = ((int)letter) - 65;
    bool isNumber = value < 0;
 
    Serial.println(value);
    //lcd.print(value);
 
    return isNumber ? numberMorse[value] : letterMorse[value];
 
}
