#include <iostream>
using namespace std;

int toBaseN(int k, int n) {
    int result = 0;
    int place = 1;

    while (k > 0) {
        int digit = k % n;
        result = result + digit * place;
        place = place * 10;
        k = k / n;
    }

    return result;
}
int main() {
    int number, base;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter the base (2-9): ";
    cin >> base;

    if (base < 2 || base > 9) {
        cout << "Invalid base. Please choose a base between 2 and 9." << endl;
        return 1;
    }

    int converted = toBaseN(number, base);

    cout << "The number " << number << " in base-" << base << " is: " << converted << endl;

    return 0;
}
