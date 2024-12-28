/*
 * Program: Square Pattern with Sequential Alphabets
 * This program prints a square pattern of size `n x n` with sequential alphabets.
 * The pattern starts with 'A' and continues across the rows, filling sequentially.
 */

#include <iostream> // Header file for standard input/output operations
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n; // Input the number of rows/columns for the square pattern

    char c = 'A'; // Initialize the starting character
    int row = 1;  // Initialize the row counter

    // Outer loop for rows
    while (row <= n) {
        int col = 1; // Initialize the column counter

        // Inner loop for columns
        while (col <= n) {
            cout << c << " "; // Print the current character
            c = c + 1;        // Move to the next character in the sequence
            col = col + 1;    // Move to the next column
        }

        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Move to the next row
    }

    return 0; // Indicates successful program termination
}
