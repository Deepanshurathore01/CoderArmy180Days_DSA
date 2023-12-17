#include<iostream>
using namespace std;

bool Linearsearch(int arr[],int X , int index ,int n)
{
  if(index == n)
  return 0;

  if(arr[index] == X)
  return 1;

 return Linearsearch(arr,X,index+1,n);
}

int main(){
  int arr[]  ={2,3,6,7,1,5};
  int X =17;
  cout<<Linearsearch(arr,X,0,6);
}