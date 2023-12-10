#include<iostream>
using namespace std;

int fact(int n){
  // base case
   if (n==0 || n == 1) 
        return 1; 

    return n * fact(n - 1);
}

int main(){
  int n;
  cin>>n;
  if(n<0){
    cout<<"factorial is not possible"<<endl;
  }
  int ans =fact(n);
  cout<<"the factorial of n is :"<<ans;

  return 0;
}