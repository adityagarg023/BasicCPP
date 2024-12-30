/*
 * Program: Right-Angled Triangle Pattern with Alphabets
 * This program prints a right-angled triangle pattern where each row starts
 * with a specific alphabet corresponding to the row number.
 */

#include <iostream> // Header file for standard input/output operations
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n; // Input the number of rows for the triangle pattern

    int row = 1; // Initialize the row counter

    // Outer loop for rows
    while (row <= n) {
        int col = 1; // Initialize the column counter

        // Inner loop for columns
        while (col <= row) {
            char c = 'A' + row - 1; // Calculate the starting character for the row
            cout << c << " ";       // Print the character
            col = col + 1;          // Move to the next column
        }

        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Move to the next row
    }

    return 0; // Indicates successful program termination
}
