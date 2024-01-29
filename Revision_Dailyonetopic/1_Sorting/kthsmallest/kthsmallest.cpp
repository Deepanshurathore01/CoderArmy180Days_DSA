#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int kthSmallest(int arr[], int l, int r, int k) {
    if (k < 1 || k > r - l + 1) {
        // Invalid k value
        return -1; // or handle it appropriately
    }

    quickSort(arr, l, r - 1);

    return arr[l + k - 1];
}

int main() {
    int arr[] = {7, 10, 4, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    int result = kthSmallest(arr, 0, n, k);

    if (result != -1) {
        cout << "Kth smallest element is: " << result << endl;
    } else {
        cout << "Invalid k value" << endl;
    }

    return 0;
}
