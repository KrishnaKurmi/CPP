#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is NOT a prime number." << endl;
    } else {
        bool isPrime = true;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " is a Prime Number." << endl;
        else
            cout << num << " is NOT a Prime Number." << endl;
    }

    return 0;
}
