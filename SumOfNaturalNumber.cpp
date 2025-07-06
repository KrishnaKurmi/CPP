#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;  // Adding numbers from 1 to n
    }

    cout << "Sum of first " << n << " natural numbers = " << sum;
    return 0;
}
