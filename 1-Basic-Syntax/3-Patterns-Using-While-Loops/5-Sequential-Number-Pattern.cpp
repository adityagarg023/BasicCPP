/*
 * Program: Sequential Number Pattern
 * This program prints a square pattern of `n x n` numbers, where the numbers
 * are printed sequentially starting from 1.
 */

#include <iostream> // Header file for standard input/output operations
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n; // Input the size of the square pattern

    int row = 1;      // Initialize the row counter
    int count = 1;    // Initialize the sequential number to be printed

    // Outer loop for rows
    while (row <= n) {
        int col = 1;  // Initialize the column counter

        // Inner loop for columns
        while (col <= n) {
            cout << count << " "; // Print the current number
            count = count + 1;    // Increment the number
            col = col + 1;        // Move to the next column
        }

        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Move to the next row
    }

    return 0; // Indicates successful program termination
}
