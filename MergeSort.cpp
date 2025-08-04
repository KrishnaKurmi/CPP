#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    // Sizes of two subarrays
    int s1 = mid - left + 1;
    int s2 = right - mid;

    // Temporary arrays
    int L[s1], R[s2];

    // Copy data into temp arrays
    for (int i = 0; i < s1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < s2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temp arrays back into arr[left..right]
    int i = 0;    
    int j = 0;    
    int k = left;  

    while (i < s1 && j < s2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements (if any)
    while (i < s1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < s2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Recursive function to sort using Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Find the midpoint
        int mid = left + (right - left) / 2;

        // Recursively sort the two halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
