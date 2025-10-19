#include <gtest/gtest.h>
#include "question4.h"  // Include the header for the binary_to_decimal function

// Test case for binary_to_decimal function
TEST(BinaryConversionTest, BasicTestCases) {
    // Test 1: Binary string "00001010" should convert to 10
    EXPECT_EQ(binary_to_decimal("00001010"), 10);

    // Test 2: Binary string "10101010" should convert to 170
    EXPECT_EQ(binary_to_decimal("10101010"), 170);

    // Test 3: Binary string "11111111" should convert to 255
    EXPECT_EQ(binary_to_decimal("11111111"), 255);

    // Test 4: Binary string "00000000" should convert to 0
    EXPECT_EQ(binary_to_decimal("00000000"), 0);

    // Test 5: Binary string "10000000" should convert to 128
    EXPECT_EQ(binary_to_decimal("10000000"), 128);

    // Test 6: Binary string "11100000" should convert to 224
    EXPECT_EQ(binary_to_decimal("11100000"), 224);
}

// Test case for invalid binary strings (strings longer or shorter than 8 characters)
TEST(BinaryConversionTest, InvalidBinaryStringTest) {
    // Test 1: Binary string with 7 characters ("1111111") should return -1
    EXPECT_EQ(binary_to_decimal("1111111"), -1);

    // Test 2: Binary string with 9 characters ("111111111") should return -1
    EXPECT_EQ(binary_to_decimal("111111111"), -1);

    // Test 3: Binary string with invalid characters ("12345678") should return -1
    EXPECT_EQ(binary_to_decimal("12345678"), -1);

    // Test 4: Binary string with invalid characters ("1a010101") should return -1
    EXPECT_EQ(binary_to_decimal("1a010101"), -1);
}

