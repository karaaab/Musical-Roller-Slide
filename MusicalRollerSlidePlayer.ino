//#include <SoftwareSerial.h>


int pirPin = D8; //sensor output


int motionStatus = 0;
int pirState = 0;


#define SOUNDS A7 //  when pin LOW plays music.
//SoftwareSerial fx #Serial(rxPin, txPin);


void setup() {
  // put your setup code here, to run once:
  digitalWrite(SOUNDS, HIGH);
  //digitalWrite(pirPin, HIGH); //can this exist??
  pinMode(pirPin, INPUT);
  //pinMode(rxPin, INPUT);
  //pinMode(txPin, OUTPUT);
  Serial.begin(9600);
  pinMode(pirPin, INPUT_PULLUP);
  pinMode(SOUNDS, OUTPUT); 
  //Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  motionStatus = digitalRead(pirPin);


  if (motionStatus == HIGH)  //when pirPin becomes high, when sensor reads motion
  {
    Serial.println("Motion detected");
    digitalWrite(SOUNDS, 0);
    delay(10);
    digitalWrite(SOUNDS, 1);
    delay(3000); 
    motionStatus == LOW; // should prevent constant 3-second loop
  }}