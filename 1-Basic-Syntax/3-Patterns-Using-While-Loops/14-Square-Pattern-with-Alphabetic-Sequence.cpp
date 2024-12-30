/*
 * Program: Square Pattern with Alphabetic Sequence (Based on Row and Column)
 * This program prints a square pattern of size `n x n`, where each character
 * is determined by the formula `'A' + row + col - 2`.
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
            char c = 'A' + row + col - 2; // Calculate the character based on row and column
            cout << c << " ";            // Print the current character
            col = col + 1;               // Move to the next column
        }

        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Move to the next row
    }

    return 0; // Indicates successful program termination
}
