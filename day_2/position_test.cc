#include "position.h"

#include <gtest/gtest.h>

TEST(CommandTest, DirectionForwardTest) {
  auto cmd = Command("forward 9");

  EXPECT_EQ(cmd.direction(), Direction::kForward);
}

TEST(CommandTest, DirectionUpTest) {
  auto cmd = Command("up 9");

  EXPECT_EQ(cmd.direction(), Direction::kUp);
}

TEST(CommandTest, DirectionDownTest) {
  auto cmd = Command("down 9");

  EXPECT_EQ(cmd.direction(), Direction::kDown);
}

TEST(CommandTest, DistanceMinTest) {
  auto cmd = Command("forward 1");

  EXPECT_EQ(cmd.distance(), 1);
}

TEST(CommandTest, DistanceMaxTest) {
  auto cmd = Command("forward 9");

  EXPECT_EQ(cmd.distance(), 9);
}
