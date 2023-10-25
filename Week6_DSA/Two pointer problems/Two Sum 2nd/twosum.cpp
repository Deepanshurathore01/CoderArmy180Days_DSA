#include<iostream>
#include<vector>

// 1 Brute force approach.
 vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n =numbers.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(numbers[i]+numbers[j]==target)
                {
                    ans.push_back(numbers[i]);
                    ans.push_back(numbers[j]);
                    break;
                }
            }
        }
        return ans;
    }

    // 2 using binary search algorithm
   // tc :o(n log n) sc :o(1)
    vector<int> twoSum(vector<int>& num, int target) {
      int low, mid, high;
      const int size = num.size() - 1;
      for(int i = 0; i < num.size(); ++i){
        int complement = target - num[i];
        low = i+1;
        high = size;
        while(low <= high){
          mid = (low + high) / 2;
          if(num[mid] == complement){
              return {i+1, mid+1};
          }
          else if(num[mid] > complement)
            high = mid - 1;
          else
            low = mid + 1;
        }
      }
      return {};    
    }



    // 3 two pointer
    // tc :o(n)
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int start =0 ,end =numbers.size()-1;
        while(start <= end){
            if(numbers[start]+numbers[end] == target){
                ans.push_back(numbers[start]);
                ans.push_back(numbers[end]);
                return ans;
            }
            else if(numbers[start]+numbers[end] > target){
                end--;
            }
            else{
                start++;
            }
        }
        return ans;
    }