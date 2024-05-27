const int potPin = 34; // middle pin of potentiometer
int potValue = 0; // variable for storing the potentiometer value

// Exercise 2: Assign the GPIO pin for the LED

void setup() {
  // Exercise 2: Add the code to configure the GPIO pin for LED as output

  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // Reading potentiometer value
  potValue = analogRead(potPin);

  // Exercise 2:
  // Add the code to check whether potValue is above 3072
  // Turn on the LED if it is above 3072
  // Otherwise turn off the LED

  Serial.println(potValue);
  delay(500);
}
