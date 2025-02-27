#include <gtest/gtest.h>

#include "add.h"
#include <string>

TEST(AddTest, IntAddition) {
    EXPECT_EQ(add<int>(1, 2), 3);
    EXPECT_EQ(add<int>(1, -2), -1);
    EXPECT_EQ(add<int>(0, 0), 0);
}

TEST(AddTest, DoubleAddition) {
    EXPECT_DOUBLE_EQ(add<double>(-1.0, 1.0), 0.0);
    EXPECT_DOUBLE_EQ(add<double>(1.0, 2.0), 3.0);
    EXPECT_DOUBLE_EQ(add<double>(0.0, 0.0), 0.0);
    EXPECT_DOUBLE_EQ(add<double>(-1.5, 1.0), -0.5);
    EXPECT_DOUBLE_EQ(add<double>(-100.7, 1.0), -99.7);
}

TEST(AddTest, FloatAddition) {
    EXPECT_FLOAT_EQ(add<float>(-1.0f, 1.0f), 0.0f);
    EXPECT_FLOAT_EQ(add<float>(1.0f, 2.0f), 3.0f);
    EXPECT_FLOAT_EQ(add<float>(0.0f, 0.0f), 0.0f);
    EXPECT_FLOAT_EQ(add<float>(-1.5f, 1.0f), -0.5f);
    EXPECT_FLOAT_EQ(add<float>(-100.7f, 1.0f), -99.7f);
}

TEST(AddTest, StringAddition) {
    EXPECT_EQ(add<std::string>(std::string("Hello, "), std::string("world!")), "Hello, world!");
    EXPECT_EQ(add<std::string>(std::string(""), std::string("test")), "test");
    EXPECT_EQ(add<std::string>(std::string(""), std::string("")), "");
    EXPECT_EQ(add<std::string>(std::string(" "), std::string(" ")), "  ");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}