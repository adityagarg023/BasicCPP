/*
 * My Solution
 * Program: Square Pattern with Alphabets
 * This program prints a square pattern where each row contains the same alphabet,
 * starting with 'A' for the first row, 'B' for the second, and so on.
 */

#include <iostream> // Header file for standard input/output operations
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n; // Input the number of rows/columns for the square pattern

    int row = 1;  // Initialize the row counter
    char c = 65;  // ASCII value of 'A'

    // Outer loop for rows
    while (row <= n) {
        int col = 1; // Initialize the column counter

        // Inner loop for columns
        while (col <= n) {
            cout << c << " "; // Print the current character
            col = col + 1;    // Move to the next column
        }

        c = c + 1;  // Move to the next alphabet for the next row
        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Move to the next row
    }

    return 0; // Indicates successful program termination
}



/*
 * Optimal Solution
 * Program: Square Pattern with Alphabets
 * This program prints a square pattern where each row contains the same alphabet,
 * starting with 'A' for the first row, 'B' for the second, and so on.
 * The row number is used to determine the alphabet being printed.
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
            char c = 'A' + row - 1; // Calculate the character for the current row
            cout << c << " ";       // Print the current character
            col = col + 1;          // Move to the next column
        }

        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Move to the next row
    }

    return 0; // Indicates successful program termination
}
