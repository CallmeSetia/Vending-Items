#include <Adafruit_Fingerprint.h>
Adafruit_Fingerprint finger = Adafruit_Fingerprint(&Serial2);

uint8_t id;


void setup() {
  Serial.begin(115200);
  //  rfid_Init();
  //  Servo_Init();
  //  mhSensor_Init();
  //  lcd_Init();
  FingerPrint_Init();
  ValidationFingerInit();
}

void loop() {
  //  mhSensor_Test();
  //    testServo();
  //  bacaKeypad();
  //  bacaRfid();
  //  Serial.println("Coba");
  //  delay(50);
  //  servoBuka();
  //  delay(1000);
  //  servoTutup();
  //  delay(1000);
  //  servoBuka();
  //  delay(3000);
  //  servoTutup();
  //  delay(3000);

  Serial.println("Ready to enroll a fingerprint!");
  Serial.println("Please type in the ID # (from 1 to 127) you want to save this finger as...");
  id = readnumberInput();
  if (id == 0) {// ID #0 not allowed, try again!
    return;
  }
  Serial.print("Enrolling ID #");
  Serial.println(id);

  while (!  getFingerprintEnroll() );
  //  FingerIdValidation();
}
