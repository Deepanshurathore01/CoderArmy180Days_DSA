#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& arr, int target) {
       int start =0 , end = arr.size()-1 ,ans =arr.size();

       while(start <= end ){
           int mid = start + (end - start)/2;

           if(arr[mid] == target){
               ans = mid ;
               return ans;
           }
           else if(arr[mid] < target){
               start =mid+1;
           }
           else{
               ans = mid;
               end = mid-1;
           }
       }
       return ans;
    }

    int main(){
  vector<int>arr = {1,4,6,7,8,9};
  int target =5;
int ans = searchInsert(arr, target);
  
    cout<<ans<<" ";
 
}