#include "gtest/gtest.h"
#include "main/retSquare.h"

// Tests square of 0 .
TEST(retSquareTest, HandlesZeroInput) {
  EXPECT_EQ(retSquare(0), 0);
}

// Tests square of 3 .
TEST(retSquareTest, HandlesThreeInput) {
  EXPECT_EQ(retSquare(3), 9);
}
