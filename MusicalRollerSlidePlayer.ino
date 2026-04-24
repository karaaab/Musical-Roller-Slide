int pirPin = D8;

int motionStatus = 0;
int pirState = 0;

#define SOUNDS A7  //music plays when low

void setup() {
  digitalWrite(SOUNDS, HIGH);
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
  pinMode(pirPin, INPUT_PULLUP);
  pinMode(SOUNDS, OUTPUT); 
}

void loop() {
  motionStatus = digitalRead(pirPin);

  if (motionStatus == HIGH)
  {
    Serial.println("Motion detected");
    digitalWrite(SOUNDS, 0);
    delay(10);
    digitalWrite(SOUNDS, 1);
    delay(3000); 
    motionStatus == LOW;
  }
}
