#include <iostream>

#include "input.h"

int main() {
  auto cmds = read_input();

  int x = 0, y = 0;
  for (Command c : cmds) {
    if (c.direction() == Direction::kDown) {
      y += c.distance();
    } else if (c.direction() == Direction::kUp) {
      y -= c.distance();
    } else {
      x += c.distance();
    }
  }

  std::cout << "x: " << x << '\n';
  std::cout << "y: " << y << '\n';
  std::cout << x * y << '\n';

  return 0;
}
