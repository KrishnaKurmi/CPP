#include <iostream>
using namespace std;

#define SIZE 256

void readString(char str[]) {
    char ch;
    int i = 0;
    while ((ch = cin.get()) != '\n') {
        str[i++] = ch;
    }
    str[i] = '\0';
}
char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;
    return ch;
}

bool isAlphabet(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

bool isAnagram(char str1[], char str2[]) {
    int count1[SIZE] = {0};
    int count2[SIZE] = {0};

    int i = 0;
    while (str1[i] != '\0') {
        if (isAlphabet(str1[i])) {
            char ch = toLower(str1[i]);
            count1[(int)ch]++;
        }
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        if (isAlphabet(str2[i])) {
            char ch = toLower(str2[i]);
            count2[(int)ch]++;
        }
        i++;
    }

    for (int i = 0; i < SIZE; i++) {
        if (count1[i] != count2[i])
            return false;
    }

    return true;
}

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    readString(str1);

    cout << "Enter second string: ";
    readString(str2);

    if (isAnagram(str1, str2)) {
        cout << "The strings are Anagrams." << endl;
    } else {
        cout << "The strings are NOT Anagrams." << endl;
    }

    return 0;
}
