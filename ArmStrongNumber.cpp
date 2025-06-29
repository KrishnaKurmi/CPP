#include <iostream>
using namespace std;

// Function to calculate base^exponent without using pow()
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int number, originalNumber, remainder, result = 0;

    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    // Count number of digits
    int digits = 0;
    int temp = number;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits raised to the power of number of digits
    temp = number;
    while (temp != 0) {
        remainder = temp % 10;
        result += power(remainder, digits);
        temp /= 10;
    }

    // Check if number is Armstrong
    if (result == originalNumber)
        cout << originalNumber << " is an Armstrong number." << endl;
    else
        cout << originalNumber << " is NOT an Armstrong number." << endl;

    return 0;
}
