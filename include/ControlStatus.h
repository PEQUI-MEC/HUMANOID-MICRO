#ifndef CONTROLSTATUS_H_
#define CONTROLSTATUS_H_

enum class ControlState {
  Unknown = 0,
  Idle = 1,
  March = 2,
  Walk = 3,
  Turn = 4,
  Fallen = 5,
  Up = 6
};

struct ControlStatus {
  ControlState state;
  bool is_mode_manual;
};

#endif
