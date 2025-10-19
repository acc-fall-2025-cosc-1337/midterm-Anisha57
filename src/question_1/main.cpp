#include <iostream>
#include "question1.h"  // Include the header file for function declaration

using namespace std;

int main() {
    int userInput;
    string hexValue;

    while (true) {
        // Prompt the user for an input
        cout << "Enter an integer value between 1 and 512 (or 0 to exit): ";
        cin >> userInput;

        // Validate the input
        if (userInput == 0) {
            break;  // Exit the loop if user enters 0
        }

        if (userInput < 1 || userInput > 512) {
            cout << "Invalid input. Please enter a value between 1 and 512." << endl;
            continue;  // Skip the rest of the loop and ask for input again
        }

        // Call the decimal_to_hex function
        hexValue = decimal_to_hex(userInput);

        // Output the result
        cout << "Decimal: " << userInput << " -> Hexadecimal: " << hexValue << endl;
    }

    cout << "Program terminated." << endl;
    return 0;
}
