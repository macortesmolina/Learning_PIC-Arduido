#define REDCARS 13
#define YELLOWCARS 12
#define GREENCARS 11
#define GREENPEDESTRIANS 10
#define REDPEDESTRIANS 9
#define SIGNAL 3
#define BUTTON 6

void setup() {
  // put your setup code here, to run once:
  pinMode(REDCARS,OUTPUT);
  digitalWrite(REDCARS,LOW);
  pinMode(YELLOWCARS,OUTPUT);
  digitalWrite(YELLOWCARS,LOW);
  pinMode(GREENCARS,OUTPUT);
  digitalWrite(GREENCARS,LOW);
  pinMode(GREENPEDESTRIANS,OUTPUT);
  digitalWrite(GREENPEDESTRIANS,LOW);
  pinMode(REDPEDESTRIANS,OUTPUT);
  digitalWrite(REDPEDESTRIANS,LOW);
  pinMode(SIGNAL,OUTPUT);
  digitalWrite(SIGNAL,LOW);
  pinMode(BUTTON,OUTPUT);
  digitalWrite(BUTTON,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(REDCARS,HIGH);
  delay(1000);
  digitalWrite(REDCARS,LOW);
  delay(1000);
  digitalWrite(YELLOWCARS,HIGH);
  delay(1000);
  digitalWrite(YELLOWCARS,LOW);
  delay(1000);
  digitalWrite(GREENCARS,HIGH);
  delay(1000);
  digitalWrite(GREENCARS,LOW);
  delay(1000);
  digitalWrite(GREENPEDESTRIANS,HIGH);
  delay(1000);
  digitalWrite(GREENPEDESTRIANS,LOW);
  delay(1000);
  digitalWrite(REDPEDESTRIANS,HIGH);
  delay(1000);
  digitalWrite(REDPEDESTRIANS,LOW);
  delay(1000);
  digitalWrite(SIGNAL,HIGH);
  delay(1000);
  digitalWrite(SIGNAL,LOW);
  delay(1000);
 
}
