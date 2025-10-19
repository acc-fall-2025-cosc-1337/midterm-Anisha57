#include "question4.h"
#include <iostream>
#include <cmath>  // For pow function

// Function to convert a binary string to a decimal number
int binary_to_decimal(const std::string& binary) {
    int decimal = 0;
    
    // Check if the binary string has 8 characters
    if (binary.length() != 8) {
        std::cerr << "Invalid input: The binary string must be exactly 8 bits long." << std::endl;
        return -1;  // Return -1 if the string length is invalid
    }
    
    // Iterate over the binary string and convert each bit
    for (int i = 0; i < 8; i++) {
        // Check if the character is '1'
        if (binary[i] == '1') {
            // Add the appropriate power of 2 to the decimal value
            decimal += std::pow(2, 7 - i);  // 2^7, 2^6, ..., 2^0
        } else if (binary[i] != '0') {
            // If the character is neither '0' nor '1', return -1 for invalid input
            std::cerr << "Invalid binary string: Only '0' and '1' are allowed." << std::endl;
            return -1;
        }
    }
    return decimal;
}
