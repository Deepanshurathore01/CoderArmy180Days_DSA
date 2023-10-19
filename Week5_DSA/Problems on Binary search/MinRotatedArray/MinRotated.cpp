 
 #include <iostream>
#include <vector>
using namespace std;
 
 int findMin(vector<int>& arr) {
        	int ans = arr[0] ,start =0 ,end =arr.size()-1;

            while(start <= end){
                int mid = start +(end -start)/2;
                
                // left sorted
                if(arr[mid] >= arr[0]){
                    start = mid+1;
                }
                // right sorted
                else{
                    ans = arr[mid];
                    end = mid -1;
                }
            }
            return ans;
    }

    int main()
{

  vector<int> arr = {1, 6, 3, 2, 1};
  int ans = findMin(arr);

  cout << ans << " ";
}