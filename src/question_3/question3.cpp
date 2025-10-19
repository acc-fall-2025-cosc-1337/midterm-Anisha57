#include "question3.h"  // Include the header file for function declarations

// Function to get hours from the Unix timestamp
int get_hours(int seconds_since_1970) {
    return (seconds_since_1970 / 3600) % 24;  // 3600 seconds in an hour, modulo 24 for 24-hour format
}

// Function to get minutes from the Unix timestamp
int get_minutes(int seconds_since_1970) {
    return (seconds_since_1970 / 60) % 60;  // 60 seconds in a minute, modulo 60 for minutes
}

// Function to get seconds from the Unix timestamp
int get_seconds(int seconds_since_1970) {
    return seconds_since_1970 % 60;  // Seconds are the remainder when divided by 60
}
