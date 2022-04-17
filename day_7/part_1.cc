#include <algorithm>
#include <iostream>
#include <limits>

#include "fuel.h"
#include "input.h"

int main() {
  auto nums = read_input();
  std::sort(nums.begin(), nums.end());

  int min = std::numeric_limits<int>::max();
  int min_i = -1;

  for (int i = 0; i < nums.back(); i++) {
    int fuel = calc_fuel_v1(i, nums);

    if (fuel < min) {
      min = fuel;
      min_i = i;
    }
  }

  std::cout << min_i << ": " << min << '\n';

  return 0;
}
