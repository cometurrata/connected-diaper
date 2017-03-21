#include <Wire.h>
#include "cactus_io_BME280_I2C.h"

// Create the BME280 object
BME280_I2C bme;              // I2C using default 0x77
// or BME280_I2C bme(0x76);  // I2C using address 0x76

void setup() {
  Serial.begin(115200);
  Serial.println("Bosch BME280 Barometric Pressure - Humidity - Temp Sensor | cactus.io");

  if (!bme.begin()) {
    Serial.println("Could not find a valid BME280 sensor, check wiring!");
    while (1);
  }

  bme.setTempCal(-1);

  Serial.println("Pressure\tHumdity\t\tTemp\t\tTemp");
}

void loop() {

    bme.readSensor();

    Serial.print(bme.getPressure_MB()); Serial.print("\t\t");
    Serial.print(bme.getHumidity()); Serial.print("\t\t");
    Serial.print(bme.getTemperature_C()); Serial.print(" *C\t");
    Serial.print(bme.getTemperature_F()); Serial.println(" *F\t");
    delay(2000);
}
