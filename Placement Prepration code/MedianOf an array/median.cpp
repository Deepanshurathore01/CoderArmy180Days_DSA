#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int arr[5] ={3,1,5,2,4};
  sort(arr,arr+1);

  int median =(arr[0] +arr[4])/2;
  cout<<"median of the aray is :"<<median;
}