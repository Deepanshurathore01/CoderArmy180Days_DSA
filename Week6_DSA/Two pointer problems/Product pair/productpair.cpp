#include<iostream>
using namespace std;

// 1 brute force approch 
// tc: o(n^2) , sc:o(1)
bool isProduct(int arr[], int n, long long x) {
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i] * arr[j] == x) return true;
            }
        }
        return false;
    }

    // 2 pointer approch
     bool isProduct(int arr[], int n, long long x) {
        
     sort(arr,arr+n);
  
        int start =0 , end =n-1;
        while(start <= end){
            if(arr[start] * arr[end] == x) return true;
            else if(arr[start] * arr[end] < x) start++;
            else if(arr[start] * arr[end] > x) end--;  
            
            if(arr[start] < 0) return true;
        }
        return false;
    }

    //  using unorder set 
    // tc:o(n) , sc:o(n)
    bool isProduct(int arr[], int n, long long x) {
    // Create an unordered set to store elements we've seen so far.
    unordered_set<long double> s;
    
    // Iterate through the input array.
    for (int i = 0; i < n; i++) {
        // Calculate the complement (x / arr[i]) as a floating-point number.
        long double div = (long double)x / (long double)arr[i];
        
        // If the complement is already in the set, we found a pair with the desired product.
        if (s.find(div) != s.end()) {
            return true;
        }
        
        // Insert the current element into the set for future checks.
        s.insert(arr[i] / 1.0);
    }
    
    // If no such pair is found, return false.
    return false;
}
