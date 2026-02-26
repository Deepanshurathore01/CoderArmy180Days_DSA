#include<iostream>
using namespace std;

int main()
{
  int n=5;
  int arr[n] = {4, 7, 91, 8, 5};
  int large =arr[0] ,small =arr[0];
  for(int i=1;i<n;i++)
  {
    if(arr[i] > large)
    large =arr[i];
    else if(arr[i] < small )
    small =arr[i];
  }

  cout<<"Lagrest num in array is : "<<large<<endl;
  cout<<"Smallest num in array is : "<<small<<endl;
}