/*
 * My Solution
 * Program: Right-Angled Triangle with Increasing Numbers
 * This program prints a right-angled triangle pattern, where each row starts
 * with a number calculated as `row + col - 1` and increments across columns.
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
            cout << row + col - 1 << " "; // Calculate and print the value
            col = col + 1; // Move to the next column
        }

        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Move to the next row
    }

    return 0; // Indicates successful program termination
}



/*
 * Optimal Solution
 * Program: Right-Angled Triangle with Increasing Numbers
 * This program prints a right-angled triangle pattern, where each row starts
 * with the row number, and the numbers increment across columns.
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
        int col = 1;      // Initialize the column counter
        int value = row;  // Set the starting value for each row

        // Inner loop for columns
        while (col <= row) {
            cout << value << " "; // Print the current value
            value = value + 1;    // Increment the value
            col = col + 1;        // Move to the next column
        }

        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Move to the next row
    }

    return 0; // Indicates successful program termination
}
