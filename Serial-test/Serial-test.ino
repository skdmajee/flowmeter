#include <SoftwareSerial.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial) {
    ; //wait for port to be ready
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello PI");
  delay(2000);
}
