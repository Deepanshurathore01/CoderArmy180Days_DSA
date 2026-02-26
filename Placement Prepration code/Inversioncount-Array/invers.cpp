// C++ program to Count Inversions
// in an array
#include <bits/stdc++.h>
using namespace std;

// Function to count inversions in the array
int getInvCount(vector<int> &arr) {
    int n = arr.size(); 
    int inv_count = 0; 
    // Loop through the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // If the current element is greater than the next,
            // increment the count
            if (arr[i] > arr[j])
                inv_count++;
        }
    }
    return inv_count; 
}

int main() {
    vector<int> arr = {4, 3, 2, 1};
    cout << getInvCount(arr) << endl; 
    return 0;
}
