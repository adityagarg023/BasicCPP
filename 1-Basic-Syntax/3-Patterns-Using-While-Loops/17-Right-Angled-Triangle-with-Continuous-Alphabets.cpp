/*
 * My Solution:
 * This program prints a right-angled triangle pattern where each row starts with 
 * an alphabet determined by the row and column relationship and continues sequentially.
 */

#include <iostream> // Header file for standard input/output operations
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n; // Input the number of rows for the triangle pattern

    int row = 1;

    // Outer loop for rows
    while (row <= n) {
        int col = 1;

        // Inner loop for columns
        while (col <= row) {
            char c = 'A' + row + col - 2; // Calculate the character based on row and col
            cout << c << " ";
            col = col + 1; // Increment column counter
        }

        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Increment row counter
    }

    return 0; // Indicates successful program termination
}



/*
 * Optimal Solution:
 * This program prints a square pattern of size n with sequential alphabets, 
 * where each row starts with an alphabet corresponding to the row number.
 */

#include <iostream> // Header file for standard input/output operations
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n; // Input the number of rows for the square pattern

    int row = 1;

    // Outer loop for rows
    while (row <= n) {
        int col = 1;
        char c = 'A' + row - 1; // Calculate the starting character for the row

        // Inner loop for columns
        while (col <= n) {
            cout << c << " "; // Print the current character
            c = c + 1;        // Move to the next character
            col = col + 1;    // Increment column counter
        }

        cout << endl; // Move to the next row after completing a row
        row = row + 1; // Increment row counter
    }

    return 0; // Indicates successful program termination
}
