void setup() {
  // Initialize the digital pins as outputs.
  pinMode(12, OUTPUT); // Red LED
  pinMode(8, OUTPUT);  // Yellow LED
  pinMode(7, OUTPUT);  // Green LED
}

void loop() {
  // Red to Green transition
  digitalWrite(12, HIGH); // Turn the Red LED on
  delay(6000);            // Wait for 6 seconds

  digitalWrite(12, LOW);  // Turn the Red LED off
  digitalWrite(7, HIGH);  // Turn the Green LED on
  delay(6000);            // Wait for 6 seconds

  // Green to Yellow transition
  digitalWrite(7, LOW);   // Turn the Green LED off
  digitalWrite(8, HIGH);  // Turn the Yellow LED on
  delay(6000);            // Wait for 6 seconds

  // Yellow to Red transition
  digitalWrite(8, LOW);   // Turn the Yellow LED off
  digitalWrite(12, HIGH); // Turn the Red LED on
  delay(3000);            // Wait for 3 seconds

  // This will loop back to the beginning automatically
}
