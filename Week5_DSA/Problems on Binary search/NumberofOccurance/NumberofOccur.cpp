	#include<iostream>
using namespace std;
  
  int count(int nums[], int n, int target) {
	     int start =0 , end =n-1 , mid ,  first =-1 ,last =-1;

    //    for first occurance 
    while(start <= end ){
        mid = start +(end - start)/2;
        if(nums[mid] == target){
            first = mid;
            end = mid -1;
        }
        else if(nums[mid] < target){
            start = mid+1;
        }
        else{
            end =mid -1;
        }
    }

     //    for last occurance 

     start =0, end =n-1;
    while(start <= end ){
        mid = start +(end - start)/2;
        if(nums[mid] == target){
            last = mid;
            start = mid + 1;
        }
        else if(nums[mid] < target){
            start = mid+1;
        }
        else{
            end =mid -1;
        }
    }
    
    if(first != -1 && last != -1){
        return last - first +1;
    }
    return 0;
	}

   int main(){
    int n = 6;
  int arr[] = {1,4,4,4,8,9};
  int target =4;
int ans = count(arr,n, target);
  
    cout<<ans<<" ";
 
}