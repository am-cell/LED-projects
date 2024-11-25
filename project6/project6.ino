

int LEDa=1;
int LEDb=3;
int LEDc=5;
int LEDd=6;
int LEDe=8;
int LEDf=9;
int LEDg=12;
int LEDh=2;
int LEDi=4;
int LEDj=7;
int LEDk=10;
int LEDl=11;
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

 digitalWrite(LEDa, HIGH); 
digitalWrite(LEDd, HIGH); 
 digitalWrite(LEDf, HIGH); 
 digitalWrite(LEDj, HIGH); 
 digitalWrite(LEDl, HIGH); 
 delay(100);                     
 digitalWrite(LEDa, LOW); 
digitalWrite(LEDd, LOW); 
 digitalWrite(LEDf, LOW); 
 digitalWrite(LEDj, LOW); 
 digitalWrite(LEDl, LOW); 
 delay(100);  
  digitalWrite(LEDa, HIGH); 
digitalWrite(LEDd, HIGH); 
 digitalWrite(LEDf, HIGH); 
 digitalWrite(LEDj, HIGH); 
 digitalWrite(LEDl, HIGH); 
 delay(100);                     
 digitalWrite(LEDa, LOW); 
digitalWrite(LEDd, LOW); 
 digitalWrite(LEDf, LOW); 
 digitalWrite(LEDj, LOW); 
 digitalWrite(LEDl, LOW); 
 delay(100);  
delay(300);
 
 digitalWrite(LEDc, HIGH); 
digitalWrite(LEDe, HIGH); 
 digitalWrite(LEDi, HIGH); 
 digitalWrite(LEDk, HIGH); 
 delay(100);                     
 digitalWrite(LEDc, LOW); 
digitalWrite(LEDe, LOW); 
 digitalWrite(LEDi, LOW); 
 digitalWrite(LEDk, LOW); 
  delay(100);  
digitalWrite(LEDc, HIGH); 
digitalWrite(LEDe, HIGH); 
 digitalWrite(LEDi, HIGH); 
 digitalWrite(LEDk, HIGH); 
 delay(100);                     
 digitalWrite(LEDc, LOW); 
digitalWrite(LEDe, LOW); 
 digitalWrite(LEDi, LOW); 
 digitalWrite(LEDk, LOW); 
  delay(100);  
delay(300);

                        
 digitalWrite(LEDb, HIGH); 
digitalWrite(LEDg, HIGH); 
 digitalWrite(LEDh, HIGH); 
 digitalWrite(LEDm, HIGH); 
 delay(100);                     
 digitalWrite(LEDb, LOW); 
digitalWrite(LEDg, LOW); 
 digitalWrite(LEDh, LOW); 
digitalWrite(LEDm, LOW); 
 delay(100);   
 digitalWrite(LEDb, HIGH); 
digitalWrite(LEDg, HIGH); 
 digitalWrite(LEDh, HIGH); 
 digitalWrite(LEDm, HIGH); 
 delay(100);                     
 digitalWrite(LEDb, LOW); 
digitalWrite(LEDg, LOW); 
 digitalWrite(LEDh, LOW); 
digitalWrite(LEDm, LOW); 
 delay(100);            
 delay(300);
           
}
