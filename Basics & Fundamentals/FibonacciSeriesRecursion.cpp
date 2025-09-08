#include <iostream>
using namespace std;

// Recursive function to return nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) return 0;       
    if (n == 1) return 1;       
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
