int inPin = A0;
int analogValue = 0;    // variable to hold the analog value

void setup() {
  // open the serial port at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog input on pin 0:
  analogValue = analogRead(0);

       // print as an ASCII-encoded decimal
  
  Serial.println(analogValue, HEX);  
  
  delay(250);
}
