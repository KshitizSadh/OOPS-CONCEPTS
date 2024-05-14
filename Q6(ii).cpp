#include <iostream>
using namespace std;

int binarySearchIterative(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid;
        }

        // If target is smaller than mid, it must be in left subarray
        if (arr[mid] > target) {
            right = mid - 1;
        } else {
            // Otherwise, the target must be in right subarray
            left = mid + 1;
        }
    }

    // Target is not present in the array
    return -1;
}

int main() {
    int n, target;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array (in sorted order): ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> target;

    int result = binarySearchIterative(arr, 0, n - 1, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

