#include <vector>
#include <iostream>

using namespace std;

int minEatingSpeed(vector<int>& arr, int h) {
    int start = 1, end = arr.size();  // Start with a reasonable range for K.
    int ans;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        int hours = 0;
        for (int i = 0; i < arr.size(); i++) {
            hours += (arr[i] + mid - 1) / mid; // Ceiling division to ensure all bananas are eaten.
        }

        if (hours <= h) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    int result = minEatingSpeed(piles, h);
    cout << "Minimum eating speed: " << result << endl;
    return 0;
}
