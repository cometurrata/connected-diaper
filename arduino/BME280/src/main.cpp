#include <Wire.h>
#include <tools.h>
#include "bme280_i2c.h"

// Create the BME280 object
BME280_I2C bme;              // I2C using default 0x77
// or BME280_I2C bme(0x76);  // I2C using address 0x76

Tools tools;

void setup() {
  Serial.begin(115200);

  #if 1
    tools.waitKeypress();
  #endif

  if (!bme.begin()) {
    Serial.println("Could not find a valid BME280 sensor, check wiring!");
    while (1);
  }

  bme.setTempCal(-1);

}

void loop() {

    bme.readSensor();

    Serial.print(millis()); Serial.print(F(","));
    Serial.print(bme.getPressure_MB()); Serial.print(F(","));
    Serial.print(bme.getHumidity()); Serial.print(F(","));
    Serial.print(bme.getTemperature_C()); Serial.println(F(","));

    delay(2000);
}
