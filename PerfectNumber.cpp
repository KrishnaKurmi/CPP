#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Find divisors and sum them up
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if number is perfect
    if (sum == num) {
        cout << num << " is a Perfect Number." << endl;
    } else {
        cout << num << " is NOT a Perfect Number." << endl;
    }

    return 0;
}
