#include <iostream>
#include "question2.h"  // Include the header file for function declaration

using namespace std;

int main() {
    double celsius, fahrenheit;
    char continueProgram;

    do {
        // Prompt user for Celsius input
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;

        // Convert Celsius to Fahrenheit
        fahrenheit = get_fahrenheit(celsius);

        // Display the result
        cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit." << endl;

        // Ask if the user wants to continue
        cout << "Do you want to enter another temperature (y/n)? ";
        cin >> continueProgram;

    } while (continueProgram == 'y' || continueProgram == 'Y');

    cout << "Program terminated." << endl;
    return 0;
}
