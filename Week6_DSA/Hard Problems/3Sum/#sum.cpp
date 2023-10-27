#include<iostream>
#include<algorithm>
using namespace std;

// tc:o(n^2) ,sc: o(1)
bool find3Numbers(int A[], int n, int X) {
    // Sort the array using std::sort (quicksort or introsort)
    sort(A, A + n);

    for (int i = 0; i < n - 2; i++) {
        int target = X - A[i];
        int start = i + 1, end = n - 1;
        
        while (start < end) {
            int current_sum = A[start] + A[end];
            
            if (current_sum == target) {
                // Found a triplet that sums to X
                return true;
            } else if (current_sum < target) {
                // Move the left pointer to the right
                start++;
            } else {
                // Move the right pointer to the left
                end--;
            }
        }
    }
    
    // No triplet found
    return false;
}