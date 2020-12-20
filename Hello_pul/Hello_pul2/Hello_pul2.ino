// In this line, we define the constant that indicates the Arduino PIN that corresponds to the color led.
#define RED 13
#define GREEN 12
#define BUTTON 4

void setup() 
{
//The pinMode defines the status mode of the pin in output. For the difitalWrite part, we define value of the output.  
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BUTTON,INPUT_PULLUP); //With this INPUT_PULLUP, we use the option of this pin of the board.

}

void loop() //We use the if function to compare the input and activate the corresponding output.
{
  if(digitalRead(BUTTON) == LOW) 
  {
    digitalWrite(GREEN,LOW);
    digitalWrite(RED,HIGH);
  }
  else
  {
    digitalWrite(RED,LOW);
    digitalWrite(GREEN,HIGH);
  }
}
