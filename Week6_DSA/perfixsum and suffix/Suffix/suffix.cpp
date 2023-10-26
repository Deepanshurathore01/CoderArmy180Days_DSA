#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    int arr[100] = {6, 4, 5, -3, 2, 8};

    vector<int> suffix(n);
    suffix[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << suffix[i] << " ";
    }

    return 0;
}
