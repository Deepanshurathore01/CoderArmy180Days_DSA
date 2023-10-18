 #include<iostream>
#include<vector>
using namespace std;
 
 int mySqrt(int x) {
       if(x <= 1) return x;
       int left =1;
       int right =x;
       int ans =0;
       while(left <= right){
           int mid = left + (right -left)/2;
           if (mid == x / mid) {
                return mid;
            } else if (mid < x / mid) {
                left = mid + 1;
                ans = mid;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }

      int main(){
  
 int n =80;
int ans = mySqrt(n);
  
    cout<<ans<<" ";
 
}