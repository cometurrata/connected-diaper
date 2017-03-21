#ifndef __EEPROM__H__
#define __EEPROM__H__

#include <Arduino.h>

void i2c_eeprom_write_byte(int deviceaddress, unsigned int eeaddress, byte data);

// WARNING: address is a page address, 6-bit end will wrap around
// also, data can be maximum of about 30 bytes, because the Wire library has a buffer of 32 bytes
void i2c_eeprom_write_page(int deviceaddress, unsigned int eeaddresspage, byte* data, byte length);

byte i2c_eeprom_read_byte(int deviceaddress, unsigned int eeaddress);

// maybe let's not read more than 30 or 32 bytes at a time!
void i2c_eeprom_read_buffer(int deviceaddress, unsigned int eeaddress, byte *buffer, int length);

#endif /* __EEPROM__H__ */
