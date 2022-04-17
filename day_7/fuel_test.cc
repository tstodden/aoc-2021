#include "fuel.h"

#include <gtest/gtest.h>

#include <vector>

TEST(FuelTestV1, BasicFuelTest) {
  auto nums = std::vector<int>{1, 2, 3};

  EXPECT_EQ(calc_fuel_v1(2, nums), 2);
}

TEST(FuelTestV2, BasicFuelTest) {
  auto nums = std::vector<int>{1, 5, 10};

  EXPECT_EQ(calc_fuel_v2(5, nums), 25);
}

TEST(FuelTestV2, AdvancedFuelTest) {
  auto nums = std::vector<int>{16, 1, 2, 0, 4, 2, 7, 1, 2, 14};

  EXPECT_EQ(calc_fuel_v2(5, nums), 168);
}
