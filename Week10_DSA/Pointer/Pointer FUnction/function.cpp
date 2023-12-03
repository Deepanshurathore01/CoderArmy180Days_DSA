#include<iostream>
using namespace std;

// void solve(int arr[]){
//   cout<< " the size of the array inside the function  is : "<<sizeof(arr)<<endl;

//   cout<< arr <<endl;
//   cout<< &arr <<endl;

//   arr[0] =45;

// }

void update(int *p){
  cout<< " value  of p inside function  : "<< p<<endl;
  cout<< " Adder of p inside function  : "<< &p<<endl;
  *p = *p +10;
}

int main(){
  // int arr[10] = {1,2,3,4};
  // cout<<"Size of the array inside main function is : "<<sizeof(arr)<<endl;

  // cout<<arr<<endl;
  // cout<<&arr<<endl;

  // for(int i=0;i<10;i++){
  //   cout<<arr[i]<<" ";
  // }
  // cout<<endl<<endl;

  // cout<<"Now the solve function is called : 0"<<endl;

  // solve(arr);
  // for(int i=0;i<10;i++){
  //   cout<<arr[i]<<" ";

  int a =5;
  int * p = &a;
  cout<<"the address of p in main : "<<p << endl;
  cout<<"the address of p in main : "<<&p << endl;

  update(&a);

  cout<<a<<endl;
  }
