/*
 * Program: Square Pattern with Alphabets (Columns in Alphabetical Order)
 * This program prints a square pattern where each row contains alphabets in ascending order
 * starting from 'A', with each column corresponding to an incremented character.
 */

#include <iostream> // Header file for standard input/output operations
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n; // Input the number of rows/columns for the square pattern

    int row = 1; // Initialize the row counter

    // Outer loop for rows
    while (row <= n) {
        int col = 1; // Initialize the column counter

        // Inner loop for columns
        while (col <= n) {
            char c = 'A' + col - 1; // Calculate the character for the current column
            cout << c << " ";       // Print the current character
            col = col + 1;          // Move to the next column
        }

        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Move to the next row
    }

    return 0; // Indicates successful program termination
}
