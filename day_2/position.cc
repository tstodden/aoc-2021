#include "position.h"

#include <sstream>
#include <stdexcept>
#include <string>

Direction parse_direction(std::string str) {
  std::ostringstream s_cmd;

  for (char c : str) {
    if (c == ' ') break;
    s_cmd << c;
  }

  std::string cmd = s_cmd.str();
  if (cmd == "forward") {
    return Direction::kForward;
  } else if (cmd == "up") {
    return Direction::kUp;
  } else if (cmd == "down") {
    return Direction::kDown;
  } else {
    throw std::invalid_argument(cmd + " is not a valid command.");
  }
}

Command::Command(const char* str) { command_str = std::string(str); }

Direction Command::direction() { return parse_direction(command_str); }

int Command::distance() { return command_str.back() - '0'; }
