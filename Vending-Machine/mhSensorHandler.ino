const int IN_A0 = 26; // analog input
const int IN_D0 = 25; // digital input

void mhSensor_Init() {

  pinMode (IN_A0, INPUT);
  pinMode (IN_D0, INPUT);

}
int value_A0;
bool value_D0;
void mhSensor_Test() {
  value_A0 = analogRead(IN_A0); // reads the analog input from the IR distance sensor
  value_D0 = digitalRead(IN_D0);// reads the digital input from the IR distance sensor
  Serial.print(" Analogue = ");
  Serial.print(value_A0);
  Serial.print("\t Digital =");
  Serial.println(value_D0);
  delay(100);
}
