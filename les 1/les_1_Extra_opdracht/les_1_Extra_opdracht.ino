void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  pinMode(D3, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("E R E R");
  delay(1000);

  analogRead(D3); // read the input pin
  analogWrite(22, 0 / 4); // analogRead values go from 0 to 1023,  analogWrite values from 0 to 255
  

  // D3, D5, D6
  digitalWrite(D5, HIGH);
  digitalWrite(D5, HIGH);
  digitalWrite(D6, HIGH);
  delay(50);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);


}
