#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int target)
{
  int start =0,end =n-1 ,mid,first =-1;
  while(start<=end)
  {
    mid =start+(end-start)/2;
    if(arr[mid]==target)
    {
      first =mid;
      end =mid-1;
    }
    else if(arr[mid] < target)
    start = mid+1;
    else
    end = mid-1;
  }
  return first;
}
int lastocc(int arr[],int n,int target)
{
  int start =0,end =n-1 ,mid,last = -1;
  while(start<=end)
  {
    mid =start+(end-start)/2;
    if(arr[mid]==target)
    {
      last =mid;
      start =mid+1;
    }
    else if(arr[mid] < target)
    start = mid+1;
    else
    end = mid-1;
  }
  return last;
}

int main()
{
  int arr[] ={5,3,3,3,3,3,3,8,8,10};
  int tgt =3;
  int first =firstocc(arr,10,tgt);
  int last =lastocc(arr,10,tgt);
  cout<<first<<" "<<last;
}
