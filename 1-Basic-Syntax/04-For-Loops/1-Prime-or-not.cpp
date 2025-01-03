#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Write the number you want to check." << endl; // Prompt the user for input
    cin >> n;

    bool prime = 1; // Assume the number is prime initially

    // Loop to check divisibility from 2 to n-1
    for (int a = 2; a < n; a++) {
        if (n % a == 0) { // Check if 'n' is divisible by 'a'
            prime = 0;    // If divisible, it's not prime
            break;        // Exit the loop early
        }
    }

    // Output the result
    if (prime == 0) {
        cout << "It is not a Prime Number." << endl;
    } else {
        cout << "It is a Prime Number." << endl;
    }

    return 0;
}
