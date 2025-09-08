#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;  // For large results
    cout << "Enter a positive number: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        factorial *= i;  // Multiply i in each iteration
    }

    cout << "Factorial of " << n << " = " << factorial;
    return 0;
}
