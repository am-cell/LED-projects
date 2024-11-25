

int LEDa=1;
int LEDb=2;
int LEDc=3;
int LEDd=4;
int LEDe=5;
int LEDf=6;
int LEDg=7;
int LEDh=8;
int LEDi=9;
int LEDj=10;
int LEDk=11;
int LEDl=12;
int LEDm=13;

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


void loop() {
  digitalWrite(LEDm, HIGH); 
digitalWrite(LEDa, HIGH); 
digitalWrite(LEDb, HIGH); 
digitalWrite(LEDc, HIGH); 
digitalWrite(LEDd, HIGH); 
digitalWrite(LEDe, HIGH); 
digitalWrite(LEDf, HIGH); 
digitalWrite(LEDg, HIGH); 
digitalWrite(LEDh, HIGH); 
digitalWrite(LEDi, HIGH); 
digitalWrite(LEDj, HIGH); 
digitalWrite(LEDk, HIGH); 
digitalWrite(LEDl, HIGH); 
 delay(300);                     
 digitalWrite(LEDm, LOW); 
digitalWrite(LEDa, LOW); 
digitalWrite(LEDb, LOW); 
digitalWrite(LEDc, LOW); 
digitalWrite(LEDd, LOW); 
digitalWrite(LEDe, LOW); 
digitalWrite(LEDf, LOW); 
digitalWrite(LEDg, LOW); 
digitalWrite(LEDh, LOW); 
digitalWrite(LEDi, LOW); 
digitalWrite(LEDj, LOW); 
digitalWrite(LEDk, LOW); 
digitalWrite(LEDl, LOW); 
 delay(300);               
}
