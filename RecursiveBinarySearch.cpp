#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high)
        return -1; // Not found

    int mid = (low + high) / 2;

    if (arr[mid] == target)
        return mid; // Found
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, high, target); // Search right half
    else
        return binarySearchRecursive(arr, low, mid - 1, target); // Search left half
}

int main() {
    int arr[100], n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the element to search: ";
    cin >> target;

    int result = binarySearchRecursive(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
