#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Reverse the number
    while (num != 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Check palindrome
    if (originalNum == reversedNum) {
        cout << originalNum << " is a Palindrome Number." << endl;
    } else {
        cout << originalNum << " is NOT a Palindrome Number." << endl;
    }

    return 0;
}
