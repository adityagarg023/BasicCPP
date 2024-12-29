/*
 * Program: Right-Angled Triangle with Sequential Numbers
 * This program prints a right-angled triangle pattern, where the numbers are 
 * printed sequentially starting from 1, increasing row by row.
 */

#include <iostream> // Header file for standard input/output operations
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n; // Input the number of rows for the triangle pattern

    int row = 1;    // Initialize the row counter
    int count = 1;  // Initialize the sequential number to be printed

    // Outer loop for rows
    while (row <= n) {
        int col = 1; // Initialize the column counter

        // Inner loop for columns
        while (col <= row) {
            cout << count << " "; // Print the current number
            count = count + 1;    // Increment the number
            col = col + 1;        // Move to the next column
        }

        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Move to the next row
    }

    return 0; // Indicates successful program termination
}
