#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    // Swapping with temporary variable
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

  // Swapping without temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    return 0;
}
