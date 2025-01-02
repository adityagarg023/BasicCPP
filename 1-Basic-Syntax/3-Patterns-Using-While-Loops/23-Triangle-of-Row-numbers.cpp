#include <iostream>
using namespace std;

int main() {
    int n; // Input: Number of rows for the pattern
    cin >> n;

    int row = 1; // Starting row number

    // Outer loop: Iterate over rows
    while (row <= n + 1) {
        int space = n - row; // Calculate the number of leading spaces
        
        // Inner loop: Print leading spaces for alignment
        while (space > 0) {
            cout << " ";      // Print a space
            space = space - 1; // Decrement the space count
        }

        int col = 1; // Initialize column for the current row

        // Inner loop: Print the current row number
        while (col <= row) {
            cout << row;      // Print the row number
            col = col + 1;    // Move to the next column
        }

        cout << endl; // Move to the next line after completing the row
        row = row + 1; // Increment the row number
    }

    return 0;
}
