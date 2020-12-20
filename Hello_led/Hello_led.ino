#define GREEN 5 // In this line, we define the constant that indicates the Arduino PIN that corresponds to the color led.

void setup() {
//The pinMode defines the status mode of the pin in output. For the difitalWrite part, we define value of the output.
  pinMode(GREEN,OUTPUT);//
  digitalWrite(GREEN,LOW);

}

void loop() {
//In this part, we define the timing and order of activation of each output / LED.
  digitalWrite(GREEN,HIGH);
  delay(1000);
  digitalWrite(GREEN,LOW);
  delay(1000);

}
