#include <iostream>
using namespace std;

int main() {
    // Infinite loop: Allows the user to create patterns continuously
    while (1) {
        int n; // Input: Number of rows for the pattern
        cin >> n;

        int row = 1; // Starting row number

        // Outer loop: Iterate over rows
        while (row <= n) {
            int col = 1; // Column for ascending numbers
            int value = n - row + 1; // Max value in the current row

            // Inner loop: Print numbers in ascending order
            while (col <= value) {
                cout << col << " "; // Print the column number
                col = col + 1;      // Increment column
            }

            int star = row - 1; // Number of pairs of stars to print

            // Inner loop: Print star pairs
            while (star > 0) {
                cout << "* * ";     // Print a pair of stars
                star = star - 1;    // Decrement star count
            }

            // Inner loop: Print numbers in descending order
            while (value > 0) {
                cout << value << " "; // Print the value in descending order
                value = value - 1;    // Decrement value
            }

            cout << endl; // Move to the next line after completing the row
            row = row + 1; // Increment the row number
        }
    }

    return 0;
}
