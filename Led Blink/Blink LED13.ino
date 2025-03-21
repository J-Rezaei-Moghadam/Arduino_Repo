/*
  Blink LED13

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. 
  On the UNO it is attached to digital pin 13 .
 
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  //turn the LED on by making the voltage HIGH
  delay(1000);                      //wait for a second
  digitalWrite(LED_BUILTIN, LOW);   //turn the LED off by making the voltage LOW
  delay(1000);                      //wait for a second
}
