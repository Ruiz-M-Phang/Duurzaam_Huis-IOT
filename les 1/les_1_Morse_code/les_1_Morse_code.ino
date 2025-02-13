void setup() {
  // Set pin D3 on the NodeMCU as an
  // output pin so it can send voltages
  pinMode(D3, OUTPUT);

  Serial.println("");
  Serial.println("RUIZ");
}

void loop() {
// R in morse code
  // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 500 milisecond
  delay(500);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 250 miliseconds
  delay(250);

  //streep
    // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 1500 milisecond
  delay(1500);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 250 miliseconds
  delay(250);

  // stip
    // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 500 milisecond
  delay(500);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 250 miliseconds
  delay(250);

// U in morse code
  // stip
    // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 500 milisecond
  delay(500);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 250 miliseconds
  delay(250);

  // stip
    // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 500 milisecond
  delay(500);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 250 miliseconds
  delay(250);

  //streep
    // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 1500 milisecond
  delay(1500);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 250 miliseconds
  delay(250);
  
// I in morse code
  // stip
    // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 500 milisecond
  delay(500);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 250 miliseconds
  delay(250);

  // stip
    // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 500 milisecond
  delay(500);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 250 miliseconds
  delay(250);

// Z in morse code
  //streep
    // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 1500 milisecond
  delay(1500);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 250 miliseconds
  delay(250);

  //streep
    // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 1500 milisecond
  delay(1500);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 250 miliseconds
  delay(250);

  // stip
    // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 500 milisecond
  delay(500);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 250 miliseconds
  delay(250);

  // stip
    // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 500 milisecond
  delay(500);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 250 miliseconds
  delay(250);

// volledige letters staan
  // set a voltage on D3
  digitalWrite(D3, HIGH);
  // wait 500 milisecond
  delay(500);
  // remove voltage from D3
  digitalWrite(D3, LOW);
  // wait 1500 miliseconds
  delay(1500);
 
}
