#include<iostream>
#include<vector>

// 1 approch using selection ,bubble ,insertionsort algorithm 
// tc:o(n^2) sc:o(1)

// 2approch sort using vector method
// tc:o(n log n) sc:o(1)
sort(arr.begin(),arr.end());

// 3 approch 
// tc:o(n) sc:o(1)
 void segregate0and1(int arr[], int n) {
        // code here
        int cnt0 =0 , cnt1 =0;
        for(int i=0;i<n;i++){
            if(arr[i]==0)cnt0++;
            else cnt1++;
        }
        
        for(int i=0;i<cnt0;i++){
            arr[i] =0;
        }
        for(int i=cnt0; i<n;i++){
            arr[i] =1;
        }
    }

    // 4 approch using 2 pointers 
    // tc:o(n) sc:o(1)
     void segregate0and1(int arr[], int n) {
        // code here
        int start =0 ,end =n-1;
        while(start <=end)
        {
            if(arr[start] == 0) start++;
            else{
                if(arr[end]==0){
                    swap(arr[start],arr[end]);
                    start++ ,end--;
                }
                else{
                    end--;
                }
            }
        }
        
    }