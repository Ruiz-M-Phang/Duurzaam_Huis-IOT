void setup() {
  // Set pin D3 on the NodeMCU as an
  // output pin so it can send voltages
  Serial.begin(115200);
  pinMode(D3, OUTPUT);

}

void loop() {
  Serial.println("RUIZ");
  delay(1000);
  
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
 
}
