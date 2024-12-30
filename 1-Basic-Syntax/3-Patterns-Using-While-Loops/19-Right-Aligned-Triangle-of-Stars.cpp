/*
 * My Solution:
 * This program prints a right-aligned triangle of stars ('*') where the number
 * of stars increases with each row, and the spaces before the stars decrease.
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n; // Input the number of rows for the triangle

    int row = 1;

    // Outer loop for rows
    while (row <= n) {
        int col = 1;
        int space = n - row;

        // Inner loop for spaces
        while (col <= space) {
            cout << " "; // Print spaces for alignment
            col = col + 1;
        }

        // Inner loop for stars
        while (col <= n) {
            cout << "*"; // Print stars
            col = col + 1;
        }

        cout << endl; // Move to the next row
        row = row + 1; // Increment row counter
    }

    return 0; // Indicates successful program termination
}



/*
 * Optimal Solution:
 * This program prints a right-aligned triangle of stars ('*') by first printing
 * spaces for alignment, followed by stars that increase with each row.
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n; // Input the number of rows for the triangle

    int row = 1;

    // Outer loop for rows
    while (row <= n) {
        int space = n - row;

        // Print spaces for alignment
        while (space) {
            cout << " ";
            space = space - 1;
        }

        int col = 1;

        // Print stars
        while (col <= row) {
            cout << "*";
            col = col + 1;
        }

        cout << endl; // Move to the next row
        row = row + 1; // Increment row counter
    }

    return 0; // Indicates successful program termination
}
