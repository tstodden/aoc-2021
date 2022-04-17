#include <cmath>
#include <vector>

int calc_fuel_v1(const int x, const std::vector<int> nums) {
  int fuel = 0;

  for (int n : nums) {
    fuel += std::abs(x - n);
  }
  return fuel;
}

int calc_fuel_v2(const int x, const std::vector<int> nums) {
  int fuel = 0;

  for (int n : nums) {
    int dist = std::abs(x - n);
    // partial sum
    fuel += dist * (dist + 1) / 2;
  }
  return fuel;
}
