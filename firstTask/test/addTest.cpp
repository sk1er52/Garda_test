#include <gtest/gtest.h>

#include "add.h"

TEST(AddTest, PositiveNumbers) {
    EXPECT_DOUBLE_EQ(add(1.0, 2.0), 3.0);
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_DOUBLE_EQ(add(-1.0, 1.0), 0.0);
}

TEST(AddTest, Zero) {
    EXPECT_DOUBLE_EQ(add(0.0, 0.0), 0.0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}