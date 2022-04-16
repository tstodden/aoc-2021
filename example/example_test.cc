#include "example.h"

#include <gtest/gtest.h>

TEST(EchoTest, BasicEchoTest) {
  // Expect output to be the same as input
  EXPECT_EQ(echo("test"), "test");
  EXPECT_NE(echo("test"), "not-a-test");
}
