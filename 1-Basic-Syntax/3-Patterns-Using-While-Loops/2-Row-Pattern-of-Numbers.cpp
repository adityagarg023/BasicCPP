/*
 * Program: Row Pattern of Numbers
 * This program prints a square pattern of `n x n` numbers, where each row consists of the row number repeated.
 */

#include <iostream> // Header file for standard input/output operations
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n; // Input the size of the square pattern

    int row = 1; // Initialize the row counter

    // Outer loop for rows
    while (row <= n) {
        int col = 1; // Initialize the column counter

        // Inner loop for columns
        while (col <= n) {
            cout << row; // Print the row number
            col = col + 1; // Move to the next column
        }

        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Move to the next row
    }

    return 0; // Indicates successful program termination
}
