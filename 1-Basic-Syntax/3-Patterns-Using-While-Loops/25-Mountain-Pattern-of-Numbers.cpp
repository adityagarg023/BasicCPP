#include <iostream>
using namespace std;

int main() {
    // Infinite loop: Allows the user to generate patterns repeatedly without restarting the program
    while (1) {
        int n; // Input: Number of rows for the pattern
        cin >> n;

        int row = 1; // Starting row number

        // Outer loop: Iterate over rows
        while (row <= n) {
            int space = n - row; // Number of spaces for alignment

            // Inner loop: Print leading spaces
            while (space > 0) {
                cout << "  ";      // Print double spaces for alignment
                space = space - 1; // Decrement space count
            }

            int col = 1; // Initialize column for numbers in ascending order

            // Inner loop: Print numbers in ascending order
            while (col <= row) {
                cout << col << " "; // Print the current column number
                col = col + 1;      // Increment column
            }

            int value = row - 1; // Start descending numbers from row - 1

            // Inner loop: Print numbers in descending order
            while (value > 0) {
                cout << value << " "; // Print the current value
                value = value - 1;    // Decrement value
            }

            cout << endl; // Move to the next line after printing the current row
            row = row + 1; // Increment the row number
        }
    }

    return 0;
}
