/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/
int LEDg=1;
int LEDh=2;

int LEDi=4;
int brightnessb=1;

int LEDj=7;
int LEDk=8;



int LEDl=12;
int LEDm=13;
int LEDa = 9; // the PWM pin the LED is attached to
int brightness = 200;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
int LEDb = 3;int LEDc = 5;int LEDd = 6;int LEDe = 10;int LEDf = 11;
// the setup routine runs once when you press reset:
void setup() {
  pinMode(LEDa, OUTPUT);
   pinMode(LEDb, OUTPUT);
    pinMode(LEDc, OUTPUT);
     pinMode(LEDd, OUTPUT); 
     pinMode(LEDe, OUTPUT);
   pinMode(LEDf, OUTPUT);
    pinMode(LEDg, OUTPUT);
     pinMode(LEDh, OUTPUT);
     pinMode(LEDi, OUTPUT);
   pinMode(LEDj, OUTPUT);
    pinMode(LEDk, OUTPUT);
     pinMode(LEDl, OUTPUT);
    pinMode(LEDm, OUTPUT);   
}
// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(LEDm, brightnessb); 
digitalWrite(LEDa, brightnessb); 
digitalWrite(LEDb, brightnessb); 
digitalWrite(LEDc, brightnessb); 
digitalWrite(LEDd, brightnessb); 
digitalWrite(LEDe, brightnessb); 
digitalWrite(LEDf, brightnessb); 
digitalWrite(LEDg, brightnessb); 
digitalWrite(LEDh, brightnessb); 
digitalWrite(LEDi, brightnessb); 
digitalWrite(LEDj, brightnessb); 
digitalWrite(LEDk, brightnessb); 
digitalWrite(LEDl, brightnessb); 
                     
 
  while(brightness>-5){
  // set the brightness of pin 9:
  analogWrite(LEDa, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness - fadeAmount;
delay(50);}
brightness=200;

while(brightness>-5){
  // set the brightness of pin 9:
  analogWrite(LEDb, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness - fadeAmount;
delay(50);}
brightness=200;

while(brightness>-5){
  // set the brightness of pin 9:
  analogWrite(LEDc, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness - fadeAmount;
delay(50);}
brightness=200;
digitalWrite(LEDh, LOW); 
while(brightness>-5){
  // set the brightness of pin 9:
  analogWrite(LEDd, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness - fadeAmount;
delay(50);}
brightness=200;

while(brightness>-5){
  // set the brightness of pin 9:
  analogWrite(LEDe, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness - fadeAmount;
delay(50);}
brightness=200;

while(brightness>-5){
  // set the brightness of pin 9:
  analogWrite(LEDf, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness - fadeAmount;
delay(50);}
digitalWrite(LEDj, LOW); 
delay(11000000000000000000000);

}
