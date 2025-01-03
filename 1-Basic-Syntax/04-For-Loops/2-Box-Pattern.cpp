#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: "; // Prompt user for input
    cin >> n;

    // Outer loop for rows
    for (int row = 1; row <= n; ++row) {
        // Inner loop for columns
        for (int col = 1; col <= n; ++col) {
            // Check if the current position is on the border
            if (row == 1 || row == n || col == 1 || col == n) {
                cout << "* "; // Print '*' for the border
            } else {
                cout << "  "; // Print space for the inner area
            }
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
