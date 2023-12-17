#include<iostream>
using namespace std;

// for non decreasing array 
bool BinarySearch(int arr[] , int start ,int end ,int X)
{
  if(start > end)
  return 0;

   int mid = start + (end-start)/2;
   if(arr[mid] == X)
   return 1;
  else if(arr[mid] < X)
  return BinarySearch(arr,mid+1,end,X);
  else
  return BinarySearch(arr,start,mid-1,X);
}

// for non decreasing array 
bool BinarySearch2(int arr[] , int start ,int end ,int X)
{
  if(start > end)
  return 0;

   int mid = start + (end-start)/2;
   if(arr[mid] == X)
   return 1;
  else if(arr[mid] < X)
  return BinarySearch(arr,start,mid-1,X);
  else
  return BinarySearch(arr,mid+1,end,X);
}

int main(){
  int arr[]  ={10,8,7,7,4,3};
  int X =3;
  cout<<BinarySearch2(arr,0,6,X);
}