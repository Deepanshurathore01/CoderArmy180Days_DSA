#include<iostream>
using namespace std;

int Sqsum(int n){
  // base case
  if(n==1)
  return 1;

return n*n+Sqsum(n-1);
}

int main(){
  int n=5;
  cout<<Sqsum(n);
}