#include <iostream>
#include <string>
using namespace std;

int main() {
    string number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if number starts with '0'
    if (number[0] == '0') {
        cout << number << " is NOT a Duck number (starts with 0)." << endl;
        return 0;
    }

    // Check for '0' in the rest of the digits
    bool hasZero = false;
    for (int i = 1; i < number.length(); i++) {
        if (number[i] == '0') {
            hasZero = true;
            break;
        }
    }

    if (hasZero)
        cout << number << " is a Duck number." << endl;
    else
        cout << number << " is NOT a Duck number." << endl;

    return 0;
}
