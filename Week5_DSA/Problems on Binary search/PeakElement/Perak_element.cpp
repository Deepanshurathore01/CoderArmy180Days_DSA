#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
  int start = 0, end = arr.size() - 1, mid;

  while (start <= end)
  {
    mid = end + (start - end) / 2;
    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
    {
      return mid;
    }
    else if (arr[mid] > arr[mid - 1])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
}

int main()
{

  vector<int> arr = {1, 6, 3, 2, 1};
  int ans = peakIndexInMountainArray(arr);

  cout << ans << " ";
}