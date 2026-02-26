#include <iostream>
#include <vector>
using namespace std;

void findPairsWithSum(int arr[], int size, int target) {
    vector<pair<int, int>> result; // To store all valid pairs

    // Iterate through the array to find all pairs
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) { // Start j from i+1 to avoid duplicates
            if (arr[i] + arr[j] == target) {
                result.push_back(make_pair(arr[i], arr[j])); // Store the pair
            }
        }
    }

    // Print the result
    if (!result.empty()) {
        cout << "Pairs with the sum " << target << " are:" << endl;
        for (const auto& p : result) {
            cout << "(" << p.first << ", " << p.second << ")" << endl;
        }
    } else {
        cout << "No pairs found with the given target sum." << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 5;
    int size = sizeof(arr) / sizeof(arr[0]);

    findPairsWithSum(arr, size, target);

    return 0;
}
