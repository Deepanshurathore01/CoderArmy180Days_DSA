#include<iostream>
#include<algorithm>

// using binary search technique
// tc :O(nlog n)
// sc :O(1)
 int countZeroes(int arr[], int n) {
        // code here
        if(arr[0]==0)
       return n;
       
       if(arr[n-1]==1)
       return 0;
       int ans =0;
       
       int start =0, end = n-1, mid;
       while(start<=end){
           mid = start + (end - start)/2;
           if(arr[mid]==0){
           ans = n-mid;
           end = mid-1;
           }
           
           else 
           start = mid+1;
       }
       return ans;
    }

// Hashing Approch 
// tc : O(n)
// sc : O(n)
int countZeroes2(int arr[], int n) {
        // code here
       unordered_map<int,int>mpp;
       for(int i=0;i<n;i++)
       {
           mpp[arr[i]]++;
       }
       
       for(auto it:mpp)
       {
           if(it.first == 0)
           return it.second;
       }
       return 0;
    }

// simple approach
// tc : o(n)
// sc : o(1)
    int countZeroes3(int arr[], int n) {
        // code here
        int cnt =0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            cnt++;
        }
        return cnt;
    }