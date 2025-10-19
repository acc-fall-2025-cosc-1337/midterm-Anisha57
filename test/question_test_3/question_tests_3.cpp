#include <gtest/gtest.h>
#include "question3.h"  // Include the header file for the functions

// Test case for get_hours function
TEST(TimeConversionTest, GetHoursTest) {
    EXPECT_EQ(get_hours(1570846218), 2);   // Test 1: 1570846218 seconds since 1970
    EXPECT_EQ(get_hours(1570875018), 10);  // Test 2: 1570875018 seconds since 1970
    EXPECT_EQ(get_hours(0), 0);            // Edge case: 0 seconds since 1970 (should be midnight)
    EXPECT_EQ(get_hours(3600), 1);         // 1 hour (3600 seconds)
    EXPECT_EQ(get_hours(86399), 23);       // Just before the next day
}

// Test case for get_minutes function
TEST(TimeConversionTest, GetMinutesTest) {
    EXPECT_EQ(get_minutes(1570846218), 10); // Test 1: 1570846218 seconds since 1970
    EXPECT_EQ(get_minutes(1570875018), 10); // Test 2: 1570875018 seconds since 1970
    EXPECT_EQ(get_minutes(0), 0);           // Edge case: 0 seconds since 1970
    EXPECT_EQ(get_minutes(3600), 0);        // 1 hour has 0 minutes
    EXPECT_EQ(get_minutes(3661), 1);        // 1 hour + 1 minute
}

// Test case for get_seconds function
TEST(TimeConversionTest, GetSecondsTest) {
    EXPECT_EQ(get_seconds(1570846218), 18);  // Test 1: 1570846218 seconds since 1970
    EXPECT_EQ(get_seconds(1570875018), 18);  // Test 2: 1570875018 seconds since 1970
    EXPECT_EQ(get_seconds(0), 0);            // Edge case: 0 seconds
    EXPECT_EQ(get_seconds(3600), 0);         // 1 hour has 0 seconds
    EXPECT_EQ(get_seconds(3661), 1);         // 1 hour + 1 minute = 1 second
}

