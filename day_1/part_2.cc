#include <iostream>

#include "input.h"
#include "window.h"

int main() {
  auto nums = read_input();

  int wind_inc = 0;

  for (int i = 1; i < nums.size() - 2; i++) {
    if (sum_window(i, nums) > sum_window(i - 1, nums)) {
      wind_inc++;
    }
  }

  std::cout << wind_inc << '\n';
  return 0;
}
