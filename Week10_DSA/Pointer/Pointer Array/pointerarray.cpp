#include<iostream>
using namespace std;

int main(){

  // int arr[4] = {12,24,36,48};
  // cout<< arr <<endl;
  // cout<< arr[0]<<endl;
  // cout<< &arr[0]<<endl;
  // cout<< &arr<<endl;


  // cout<<"after pointer operation : "<<endl;
  // int *p =arr;
  // cout<< p <<endl;
  // cout<< &p <<endl;

  // cout<<*arr<<endl;
  // cout<<*arr+1<<endl;
  // cout<<*(arr)+1<<endl;
  // cout<< arr[0]<<endl; 
  // cout<<*(arr+1)<<endl;
  // cout<< arr[1]<<endl; 
  // cout<<*(arr+2)<<endl;
  // cout<< arr[2]<<endl; 
  // cout<<*(arr+3)<<endl;
  // cout<< arr[3]<<endl; 

  // int i=0;
  // cout<<arr[i]<<endl;
  // cout<<i[arr]<<endl;
  // cout<<*(arr + i)<<endl;
  // cout<<*(i + arr)<<endl;

  int arr[10];
  cout<<sizeof(arr)<<endl;

  int *ptr = arr;
  cout<<sizeof(ptr)<<endl;

  cout<<sizeof(*ptr)<<endl;
  return 0;
}