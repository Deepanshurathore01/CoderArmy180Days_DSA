#include<iostream>
using namespace std;

int main(){
  int a =10;

  cout<<&a <<endl;
  int *ptr = &a;
  cout<<sizeof(ptr)<<endl;
  float m =2.23;
  float *ptr1 =&m;
  cout<<ptr1<<endl;
  cout<<sizeof(ptr1)<<endl;
  
  return 0;
}