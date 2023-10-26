#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

// brute force algorithm
// tc : o(n^2)
int maxdiff(vector<int>&a ,int n){
  int ans =INT_MIN;
  for(int i = 0; i < n; i++){
    for(int j =i+1;j<n;j++)
    {
      ans = max(ans,a[j]-a[i]);
    }
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

   cout<<maxdiff(arr,n);
}