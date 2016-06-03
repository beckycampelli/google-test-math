#include <limits.h>
#include "gtest/gtest.h"
#include "Math.cpp"

class AdditionTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test
    // (right before the destructor).
  }
};

class MultiplyTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
  }

  virtual void TearDown() {
  }
};

TEST_F(AdditionTest,add){
    const int x = 4;
    const int y = 5;
    Addition addition;
    EXPECT_EQ(9,addition.add(x,y));
    EXPECT_EQ(5,addition.add(2,3));
}

TEST_F(MultiplyTest,mult){
    const int x = 4;
    const int y = 5;
    Multiply multiply;
    EXPECT_EQ(20,multiply.mult(x,y));
    EXPECT_EQ(6,multiply.mult(2,3));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
