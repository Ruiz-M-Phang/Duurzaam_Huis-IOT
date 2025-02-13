void setup() {
  // Set pin D3 on the NodeMCU as an
  // output pin so it can send voltages
  pinMode(D3, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
}

void loop() {
  // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 0,01 second
  delay(10);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 0,02 seconds
  delay(20);

  // set a voltage on D5
  digitalWrite(D5, HIGH);
  // wait 0,03 second
  delay(30);
  // remove voltage from D5
  digitalWrite(D5, LOW);
  // wait 0,04 seconds
  delay(40);

  // set a voltage on D6
  digitalWrite(D6, HIGH);
  // wait 0,05 second
  delay(50);
  // remove voltage from D6
  digitalWrite(D6, LOW);
  // wait 0.06 seconds
  delay(60);
}
