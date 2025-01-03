#include <iostream>
#include <math.h> // Include for the pow() function
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: "; // Prompt user for input
    cin >> n;

    int ans = 0; // To store the binary equivalent
    int i = 0;   // To track the position in the binary number

    // Convert decimal to binary
    while (n != 0) {
        int bit = n & 1; // Extract the last bit (0 or 1) using bitwise AND
        ans = (bit * pow(10, i)) + ans; // Append the bit to the binary result
        n = n >> 1; // Right-shift the number to process the next bit
        i++; // Increment position for the next binary digit
    }

    // Output the binary equivalent
    cout << "Binary equivalent: " << ans << endl;

    return 0;
}
