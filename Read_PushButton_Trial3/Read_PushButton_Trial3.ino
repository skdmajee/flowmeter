
int pushButton = 2;
char val[16];
int lastState;
bool once = false;
int flow_counter = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
  lastState = digitalRead(pushButton);
}

void loop() {

  int buttonState = digitalRead(pushButton);

  // Read Inital value, only once.
  if (!once){
      if (buttonState == LOW) {
        Serial.println("LOW");
      }else{
        Serial.println("HIGH");
      }
  }
  once = true; // once is switched off
  
  if (buttonState != lastState) {
    if (buttonState == HIGH){
      flow_counter++;
      Serial.print(flow_counter);
      Serial.println(" PRESS");
    }else if(buttonState == LOW){
      Serial.println("RELASED");
    }   
  }
  lastState = buttonState;
}
