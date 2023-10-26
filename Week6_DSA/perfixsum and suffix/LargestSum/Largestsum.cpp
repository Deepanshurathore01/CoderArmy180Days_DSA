#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

// tc : o(n^2) , sc:O(1)
int Largestsum(vector<int>&a ,int n){
  int maxi =INT_MIN;
  for(int i=0;i<n;i++){
    int prefix =0;
    for(int j=0;j<n;j++){
      prefix += a[j];
      maxi = max(maxi,prefix);
    }
  }
  return maxi;
}

// optimize approch using kadan's algorithm

int largesumk(vector<int>&a ,int n){
  int maxi =INT_MIN , prefix =0;
  for(int i=0;i<n;i++){
    prefix += a[i];
    maxi = max(maxi,prefix);
    if(prefix < 0)
     prefix = 0;
  }

  return maxi;
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

   cout<<largesumk(arr,n);
}