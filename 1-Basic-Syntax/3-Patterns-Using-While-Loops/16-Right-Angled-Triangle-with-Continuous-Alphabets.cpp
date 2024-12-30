/*
 * Program: Right-Angled Triangle with Continuous Alphabets
 * This program prints a right-angled triangle pattern of size `n` where the
 * characters are filled with continuous alphabets starting from 'A'.
 */

#include <iostream> // Header file for standard input/output operations
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n; // Input the number of rows for the triangle pattern

    int row = 1;  // Initialize the row counter
    char c = 'A'; // Initialize the alphabet character

    // Outer loop for rows
    while (row <= n) {
        int col = 1; // Initialize the column counter

        // Inner loop for columns
        while (col <= row) {
            cout << c << " "; // Print the current character
            c = c + 1;        // Move to the next alphabet
            col = col + 1;    // Move to the next column
        }

        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Increment the row counter
    }

    return 0; // Indicates successful program termination
}
