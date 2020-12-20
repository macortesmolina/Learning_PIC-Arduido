#define BLUE 7 // In this line, we define the constant that indicates the Arduino PIN that corresponds to the color led.
#define GREEN 5 // In this line, we define the constant that indicates the Arduino PIN that corresponds to the color led.
#define RED 3 // In this line, we define the constant that indicates the Arduino PIN that corresponds to the color led.

void setup() 
{
//The pinMode defines the status mode of the pin in output. For the difitalWrite part, we define value of the output.
  pinMode(RED,OUTPUT); 
  pinMode(BLUE,OUTPUT);
  pinMode(GREEN,OUTPUT);
  digitalWrite(RED,HIGH);
  digitalWrite(BLUE,LOW);
  digitalWrite(GREEN,LOW);

}

void loop() 
{
//In this part, we define the timing and order of activation of each output / LED.
  digitalWrite(RED,HIGH);
  delay(250);
  digitalWrite(RED,LOW);
  delay(250);
  digitalWrite(BLUE,HIGH);
  delay(250);
  digitalWrite(BLUE,LOW);
  delay(250);
  digitalWrite(GREEN,HIGH);
  delay(250);
  digitalWrite(GREEN,LOW);
  delay(250);
}
