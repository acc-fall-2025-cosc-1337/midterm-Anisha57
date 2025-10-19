#include <string>
#include <algorithm>
#include "question1.h"  // Include the header file

using namespace std;

// Function to convert decimal to hexadecimal (from scratch)
string decimal_to_hex(int num) {
    string hexStr = "";
    
    // Mapping for values 10 to 15 to 'A' to 'F'
    const char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    
    // Special case for zero
    if (num == 0) {
        hexStr.push_back('0');
        return hexStr;
    }

    // Convert decimal to hexadecimal
    while (num > 0) {
        int remainder = num % 16;  // Get the remainder (hex digit)
        hexStr.push_back(hexDigits[remainder]);  // Map to the corresponding hex character
        num /= 16;  // Reduce num by a factor of 16
    }

    // Reverse the string (since we construct it in reverse order)
    reverse(hexStr.begin(), hexStr.end());
    
    return hexStr;
}
