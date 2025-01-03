#include <iostream>
#include <math.h> // Include for the pow() function
using namespace std;

int main() {
    int n;
    cout << "Enter a binary number: "; // Prompt user for input
    cin >> n;

    int ans = 0; // To store the decimal equivalent
    int i = 0;   // To track the power of 2 (position)

    // Loop to process each digit of the binary number
    while (n != 0) {
        int digit = n % 10; // Extract the last digit of the binary number

        if (digit == 1) {
            ans = pow(2, i) + ans; // Add the value of the current bit
        }

        n = n / 10; // Remove the last digit
        i++;        // Move to the next position (increase power of 2)
    }

    // Output the decimal equivalent
    cout << "Decimal equivalent: " << ans << endl;

    return 0;
}
