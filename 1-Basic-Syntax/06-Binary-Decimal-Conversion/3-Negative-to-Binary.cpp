#include <iostream>
#include <vector> // For storing binary digits
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // Check if the number is zero
    if (n == 0) {
        cout << "Binary representation: 0" << endl;
        return 0;
    }

    // Determine if the number is negative
    bool isNegative = (n < 0);

    if (isNegative) {
        n = -n; // Work with the absolute value for binary conversion
    }

    // Convert the absolute value of n to binary
    vector<int> binary;
    while (n != 0) {
        binary.push_back(n & 1); // Extract the last bit
        n = n >> 1;             // Right shift to process the next bit
    }

    // Pad to 8 bits for clarity (optional, depending on your use case)
    while (binary.size() < 8) {
        binary.push_back(0);
    }

    // Reverse the binary representation for proper order
    reverse(binary.begin(), binary.end());

    // If the number was negative, compute 2's complement
    if (isNegative) {
        // Perform binary inversion
        for (int i = 0; i < binary.size(); ++i) {
            binary[i] = 1 - binary[i];
        }

        // Add 1 to the inverted binary (2's complement)
        int carry = 1;
        for (int i = binary.size() - 1; i >= 0; --i) {
            int sum = binary[i] + carry;
            binary[i] = sum % 2; // Store the bit
            carry = sum / 2;     // Propagate the carry
        }
    }

    // Output the binary representation
    cout << "Binary representation: ";
    for (int bit : binary) {
        cout << bit;
    }
    cout << endl;

    return 0;
}
