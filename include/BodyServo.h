#ifndef BODYSERVO_H_
#define BODYSERVO_H_

#include <Arduino.h>
#include <config.h>
#include <utils/servo_utils.h>

class BodyServo {
 private:
  uint8_t cid;
  uint8_t rid;
  int16_t position;
  int16_t offset;
  bool reverse;

 public:
  explicit BodyServo(uint8_t cid,
                     uint8_t rid,
                     int16_t position = 0,
                     int16_t offset = 0,
                     bool reverse = false);
  ~BodyServo();

  uint8_t get_cid();
  uint8_t get_rid();
  int16_t get_position(void);
  uint16_t get_abs_position(void);
  void set_position(int16_t pos);
};

#endif
