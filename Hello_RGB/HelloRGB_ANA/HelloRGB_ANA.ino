// This code seeks to light the colors of an RGB LED using the analog outputs one by one.
#define RED 7 
#define GREEN 5
#define BLUE 3
#define delayTime 20

void setup() 
{
//The pinMode defines the status mode of the pin in output. For the difitalWrite part, we define value of the output.
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}
//In this part, we will progressively turn on each color and turn it off with a digitalWrite
void loop() 
{
  delay(1000);

  for(int i = 0; i < 255; i += 1)
  {
    analogWrite(GREEN, i);
    delay(delayTime);
  }

  digitalWrite(GREEN, LOW);
  delay(1000);

  for(int i = 0; i < 255; i += 1)
  {
    analogWrite(RED, i);
    delay(delayTime);    
  }

  digitalWrite(RED, LOW);
  delay(1000);

  for(int i = 0; i < 255; i += 1)
  {
    analogWrite(BLUE, i);
    delay(delayTime);    
  }

  digitalWrite(BLUE,LOW);
}
