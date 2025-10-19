#include <iostream>
#include "question3.h"  // Include the header file for function declarations

using namespace std;

int main() {
    // Provided Unix timestamp value (seconds since 1970)
    int seconds_since_1970;

    // Test Case 1
    seconds_since_1970 = 1570846218;
    cout << "For seconds_since_1970 = " << seconds_since_1970 << ":" << endl;
    cout << "Hours: " << get_hours(seconds_since_1970) << endl;
    cout << "Minutes: " << get_minutes(seconds_since_1970) << endl;
    cout << "Seconds: " << get_seconds(seconds_since_1970) << endl;

    cout << endl;

    // Test Case 2
    seconds_since_1970 = 1570875018;
    cout << "For seconds_since_1970 = " << seconds_since_1970 << ":" << endl;
    cout << "Hours: " << get_hours(seconds_since_1970) << endl;
    cout << "Minutes: " << get_minutes(seconds_since_1970) << endl;
    cout << "Seconds: " << get_seconds(seconds_since_1970) << endl;

    return 0;
}
