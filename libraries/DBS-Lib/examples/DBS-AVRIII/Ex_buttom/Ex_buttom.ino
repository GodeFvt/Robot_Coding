/*- DBS-Lib
- Author : Designed By Sopon
- FB : https://www.facebook.com/SpPCB/
- DBS-Lib is a library board that we created for practice such as C++, algorithms, mathetical, embedded system and robotics.
- This library is constantly evolving and we will do the best. We apologize if there are any mistakes.
*/
bool debug = true ;
uint32_t baud = 115200 ;
#include <DBS_AVRIII.h>
void setup() {
  DBS_begin();
}
void loop() {
  Read();
  if (buttom == 1) {
    if (debug) {
      Serial.println("Button pressed.");
    }
  }
  else {
    if (debug) {
      Serial.println("Button is not pressed.");
    }
  }
  delay(100);
}
