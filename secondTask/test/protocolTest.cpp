#include <gtest/gtest.h>
#include "protocol.h"

TEST(ProtocolTest, Addition) {
    auto request = createRequest(0, 1.5, 2.5);
    double result = processRequest(request);
    EXPECT_DOUBLE_EQ(result, 4.0);
}

TEST(ProtocolTest, Subtraction) {
    auto request = createRequest(1, 5.0, 3.0);
    double result = processRequest(request);
    EXPECT_DOUBLE_EQ(result, 2.0);
}

TEST(ProtocolTest, Multiplication) {
    auto request = createRequest(2, 2.0, 3.0);
    double result = processRequest(request);
    EXPECT_DOUBLE_EQ(result, 6.0);
}

TEST(ProtocolTest, Division) {
    auto request = createRequest(3, 6.0, 2.0);
    double result = processRequest(request);
    EXPECT_DOUBLE_EQ(result, 3.0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}