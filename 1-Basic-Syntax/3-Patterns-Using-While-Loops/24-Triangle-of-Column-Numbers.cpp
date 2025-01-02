#include <iostream>
using namespace std;

int main() {
    int n; // Input: Number of rows for the pattern
    cin >> n;

    int row = 1; // Starting row number

    // Outer loop: Iterate through rows
    while (row <= n) {
        int space = row - 1; // Number of leading spaces for the current row

        // Inner loop: Print spaces for alignment
        while (space > 0) {
            cout << " ";      // Print a space
            space = space - 1; // Decrease the space count
        }

        int col = 1; // Starting column number

        // Inner loop: Print numbers in the current row
        while (col <= n - row + 1) {
            cout << row + col - 1; // Print the calculated value (row + col - 1)
            col = col + 1;         // Move to the next column
        }

        cout << endl; // Move to the next line after completing the row
        row = row + 1; // Increment the row number
    }

    return 0;
}
