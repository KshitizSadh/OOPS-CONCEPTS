#include <iostream>
using namespace std;

void mergeArrays(int* arr1, int size1, int* arr2, int size2, int* mergedArray) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and merge them in sorted order
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }
}

int main() {
    int size1, size2;

    // Input sizes of the arrays
    cout << "Enter the size of the first ordered array: ";
    cin >> size1;
    int arr1[size1];

    cout << "Enter the elements of the first ordered array: ";
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second ordered array: ";
    cin >> size2;
    int arr2[size2];

    cout << "Enter the elements of the second ordered array: ";
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    // Create an array to hold the merged result
    int mergedArray[size1 + size2];

    // Merge the two arrays
    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    // Output the merged array
    cout << "Merged ordered array: ";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}

