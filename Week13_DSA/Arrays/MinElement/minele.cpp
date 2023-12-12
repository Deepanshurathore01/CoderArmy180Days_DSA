#include<iostream>
using namespace std;

int minel(int arr[],int index,int n){
  if(index == n-1)
  return arr[index];

  return min(arr[index],minel(arr,index+1,n));
}


int main()
{
  int arr[] ={3,4,1,2,8};
 
  cout<<minel(arr,0,5);
}