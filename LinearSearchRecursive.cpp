#include <iostream>
using namespace std;

int linearSearchRecursive(int arr[], int index, int n, int target) {
    if (index >= n)
        return -1; // Reached end, not found

    if (arr[index] == target)
        return index; // Found

    return linearSearchRecursive(arr, index + 1, n, target); // Check next element
}

int main() {
    int arr[100], n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the element to search: ";
    cin >> target;

    int result = linearSearchRecursive(arr, 0, n, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
