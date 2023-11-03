#include<iostream>
using namespace std;

// tc : o(n)  , sc: o(1)
  int majorityElement(int a[], int n)
    {
        
        int candidate , count =0;
        for(int i=0;i<n;i++){
            if(count == 0){
                count =1;
                candidate = a[i];
            }
            else{
                if(candidate == a[i])
                count++;
                else
                count--;
            }
        }
        
        count =0;
        for(int i=0;i<n;i++){
            if(a[i] == candidate){
                count++;
            }
        }
        
        if(count > n/2)
        return candidate;
        else
        return -1;
        
    }