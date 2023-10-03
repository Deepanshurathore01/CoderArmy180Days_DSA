#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number : ";
  cin>>n;

  int rem , ans=0 ,mul =1;
  while(n>0){
     rem = n%8;
     n = n/10;

     ans += rem+mul;

    mul *=8;

  }
  cout<<ans;
}