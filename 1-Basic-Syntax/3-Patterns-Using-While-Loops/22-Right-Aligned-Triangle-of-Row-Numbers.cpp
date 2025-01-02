#include <iostream>
using namespace std;

int main() {
    int n; // Input: Number of rows for the pattern
    cin >> n;

    int row = 1; // Starting row number

    // Outer loop: Iterate over rows
    while (row <= n) {
        int space = row - 1; // Number of spaces in the current row
        
        // Inner loop: Print spaces for alignment
        while (space) {
            cout << " ";      // Print a space
            space = space - 1; // Decrease the space count
        }

        int col = 1; // Starting column number

        // Inner loop: Print the current row number
        while (col <= n - row + 1) {
            cout << row;      // Print the current row number
            col = col + 1;    // Move to the next column
        }

        cout << endl; // Move to the next line after printing the row
        row = row + 1; // Increment the row number
    }

    return 0;
}
