#ifndef _TOOLS_
#define  _TOOLS_

#include <Arduino.h>

class Tools{

public:
  void i2cScan();
  static float uint32_reg_to_float (uint8_t *buf);
  static void float_to_bytes (float param_val, uint8_t *buf);
  void waitKeypress();

private:

};

#endif //_TOOLS_
