void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  pinMode(D3, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hallo");
  delay(1000);
  
  int A = random(108);
  int B = random(660);
  int C = random(558);
  int D = random(6);

// pinMode = D3
  if (A > B){
    digitalWrite(D3, HIGH);
    Serial.println("A is groter dan B");
    delay(10000);
    digitalWrite(D3, LOW);
    } else if (A < C){
    digitalWrite(D3, HIGH);
    Serial.println("A is kleiner dan C");
    delay(10000);
    digitalWrite(D3, LOW);
      };

// pinMode = D5
  if (C > A,A < B){
    digitalWrite(D5, HIGH);
    Serial.println("C is groter dan A en A is kleiner dan B");
    delay(10000);
    digitalWrite(D5, LOW);
    };

// pinMode = D6
  if (B > C,B > A,C < A){
    digitalWrite(65, HIGH);
    Serial.println("B is groter dan C en B is groter dan A en C is kleiner dan A");
    delay(10000);
    digitalWrite(D6, LOW);
    };
}
