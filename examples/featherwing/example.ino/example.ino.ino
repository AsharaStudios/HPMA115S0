/**
 * @file example.ino
 * @author Felix Galindo
 * @date June 2017
 * @brief Example using HPMA115S0 sensor library on a Featherwing
 * @note 
 */

 #include <hpma115S0.h>
 #include <SoftwareSerial.h>
SoftwareSerial hpmaSerial(10, 11); // RX, TX

//create an instance of the hpma115S0 library
HPMA115S0 hpma115S0(hpmaSerial);
 
void setup() {
  hpma115S0.init();
  hpma115S0.StartParticleMeasurement();
}

void loop() {
  hpma115S0.Update();
  delay(1000);
}
