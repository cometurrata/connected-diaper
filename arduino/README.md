# Sensors test

## BME280
Temperature, humidity & pressure I2C sensor.
I2C Address : 0x77 (0x76)

## EEPROM
2-Wire I2C EEPROM chip.
256k bytes.
I2C Address : 0x50 to 0x53

## MLX90614
Thermopile.
2-Wire I2C infrared temperature sensor.
I2C Address : 0x5A (from adafruit library code)

## Communication
Default baudrate : 115200
Serial output must be in CSV format with a timestamp in the first column.

## Data Units
Temperature => Celsius (C°)

Humity => relative humidity (RH)

Pressure => millibar (mbar)
