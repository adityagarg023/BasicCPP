#include <iostream>
using namespace std;

// Function to print an inverted right-angled triangle pattern of '*'
void printPattern(int n) {
    for (int row = 1; row <= n; ++row) {
        int space = n - row + 1; // Number of '*' in the current row
        for (int col = 1; col <= space; ++col) {
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1; // Return an error code for invalid input
    }

    printPattern(n); // Call the function to print the pattern

    return 0;
}
