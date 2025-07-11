#include <iostream>
using namespace std;

int main() {
    string str, reversedStr = "";
    
    cout << "Enter a string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    if (str == reversedStr) {
        cout << str << " is a Palindrome String." << endl;
    } else {
        cout << str << " is NOT a Palindrome String." << endl;
    }

    return 0;
}
