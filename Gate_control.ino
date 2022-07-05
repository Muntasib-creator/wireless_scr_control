#define In1 4
#define In2 5
#define In3 6
#define In4 7
int state = 0;
void setup() {
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  digitalWrite(In1, HIGH);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, HIGH);
  Serial.begin(9600); // Default communication rate of the Bluetooth module
}
void loop() {
  if (Serial.available() > 0) { // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
  }
  if (state == '4') {
    digitalWrite(In4, LOW);
    Serial.println("Dim Light OFF\nBy-Muntasib");
    state = 0;
  }
  else if (state == '5') {
    digitalWrite(In4, HIGH);
    Serial.println("Dim Light ON\nBy-Muntasib");
    state = 0;
  }
}
