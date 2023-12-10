#include<iostream>
using namespace std;

int pow(int num,int n){
  // base case 
  if(n==0)
  return 1;


return num*pow(num,n-1);
}

int main(){
  // power of 2 ,n
  int n=5;
  cout<<pow(3,n);
}