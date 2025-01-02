#include <iostream>
using namespace std;

int main() {
    int n; // Number of rows in the pattern
    cin >> n;

    int row = 1; // Start from the first row

    // Loop through each row
    while (row <= n) {
        int space = row - 1; // Number of leading spaces in the current row

        // Print spaces for alignment
        while (space) {
            cout << " ";
            space = space - 1; // Decrease the space count
        }

        int col = 1;
        int value = n - row + 1; // Number of '*' in the current row

        // Print '*' in the current row
        while (col <= value) {
            cout << "*";
            col = col + 1; // Move to the next column
        }

        cout << endl; // Move to the next row
        row = row + 1; // Increment the row count
    }

    return 0;
}
