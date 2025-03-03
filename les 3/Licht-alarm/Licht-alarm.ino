// JSON libraries
#include <ArduinoJson.h>

// JSON variables
JsonDocument doc;
char jsonOut[128];

void setup() {
  Serial.begin(11200);
  
  // Set pin D3 on the NodeMCU as an
  // output pin so it can send voltages
  pinMode(D3, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);

}

void loop() {
  CreateJS
  
  int ldr_value = analogRead(D3)
  
}
