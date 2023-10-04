#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number u want to convert : ";
  cin>>n;

  // Binary to decimal
  int rem , ans=0 ,mul =1;
  while(n>0){
    // remmainder
    rem = n%10;

    // num ko divide karo 
    n = n/10;

    // ans 
    ans =mul * rem+ans;

// mul
    mul *=2;

  }
  
// decimal to octal
 rem  ,mul =1;
  while(n>0){
     rem = n%8;
     n = n/10;

     ans += rem+mul;

    mul *=8;

  }
  cout<<ans;


}