#include<iostream>
using namespace std;

int sum(int n){
  // Base case
  if(n==1)
  return 1;

return n+sum(n-1);
}

int main(){
  int n=9;
  cout<<sum(n);
}