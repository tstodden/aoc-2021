#include <iostream>
#include <limits>

#include "input.h"

int main() {
  auto nums = read_input();

  int nums_inc = 0;
  int prev_i = std::numeric_limits<int>::max();

  for (const int i : nums) {
    if (i > prev_i) {
      nums_inc++;
    }
    prev_i = i;
  }

  std::cout << nums_inc << '\n';
  return 0;
}
