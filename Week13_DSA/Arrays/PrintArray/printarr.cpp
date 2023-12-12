#include<iostream>
using namespace std;

//1 way to print the array
void print(int arr[],int index,int n)
{
  if(index == n){
    return ;
  }
  cout<<arr[index]<<" ";
  print(arr,index+1,n);
}
// reverse way to print array
void print2(int arr[],int index,int n)
{
  if(index == n){
    return ;
  }
  print2(arr,index+1,n);
  cout<<arr[index]<<" ";
  
}

// 3 pass index till last 
void print3(int arr[],int index){
  if(index == -1)
  return;

  print3(arr,index-1);
  cout<<arr[index]<<" ";
  
}

int main(){
  int arr[] = {3,7,6,2,8};
  print3(arr,4);
}