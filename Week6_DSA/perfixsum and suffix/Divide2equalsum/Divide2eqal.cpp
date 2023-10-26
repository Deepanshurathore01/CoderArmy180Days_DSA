#include <iostream>
#include <vector>
using namespace std;

// brute force algorithm
// tc : O(n^2) , sc: O(1)
bool divtwoequal(vector<int> &a, int n)
{
  for (int i = 0; i < n; i++)
  {
    int sum1 = 0, sum2 = 0;
    for (int j = 0; j <= i; j++)
    {
      sum1 += a[j];
    }
    for (int j = i + 1; j < n; j++)
    {
      sum2 += a[j];
    }

    if (sum1 == sum2)
      return 1;
  }

  return 0;
}

// optimized approch
// tc: O(n) , sc: O(1)
bool Div2sum(vector<int> &a, int n)
{
  int total_sum = 0;
  for (int i = 0; i < n; i++)
  {
    total_sum += a[i];
  }
  int prefix = 0;
  for (int i = 0; i < n; i++)
  {
    prefix += a[i];
    int ans = total_sum - prefix;

    if (ans == prefix)
      return 1;
  }
  return 0;
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

  // cout<<divtwoequal(arr,n);
  cout << Div2sum(arr, n);
}