void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:

  pinMode(D3, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  char N = 0b01001110;
  char e = 0b01100101;
  char c = 0b01100011;
  char k = 0b01101011;
  char h = 0b01101000;
  char u = 0b01110101;
  char r = 0b01110010;
  char t = 0b01110100;
  char s = 0b01110011;
  
  Serial.println(N);//, 78);
  delay(500);
  Serial.println(e);//, 101);
  delay(500);
  Serial.println(c);//, 99);
  delay(500);
  Serial.println(k);//, 107);
  delay(500);
  Serial.println(h);//, 104);
  delay(500);
  Serial.println(u);//, 117);
  delay(500);
  Serial.println(r);//, 114);
  delay(500);
  Serial.println(t);//, 116);
  delay(500);
  Serial.println(s);//, 115);
  delay(500);

  digitalWrite(D3, HIGH);
  delay(100);
  digitalWrite(D3, LOW);


}
