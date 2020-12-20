// This code seeks to light the colors of an RGB LED using the digital outputs one by one.
#define RED 7 // In this line, we define the constant that indicates the Arduino PIN that corresponds to the color led.
#define GREEN 5
#define BLUE 3

void setup() {
//The pinMode defines the status mode of the pin in output. For the difitalWrite part, we define value of the output.
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}
//In this part, we define the timing and order of activation of each output / LED.
void loop() {
  digitalWrite(RED, HIGH);
  delay(500);
  digitalWrite(RED, LOW);
  delay(500);
  digitalWrite(GREEN, HIGH);
  delay(500);
  digitalWrite(GREEN, LOW);
  delay(500);
  digitalWrite(BLUE, HIGH);
  delay(500);
  digitalWrite(BLUE, LOW);
  delay(500);

}
