#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number : ";
  cin>>n;

  int rem , ans=0 ,mul =1;
  while(n>0){
    // remmainder
    rem = n%10;

    // num ko divide karo 
    n = n/10;

    // ans 
    ans =mul * rem+ans;

// mul
    mul *=8;

  }
  cout<<ans;
}