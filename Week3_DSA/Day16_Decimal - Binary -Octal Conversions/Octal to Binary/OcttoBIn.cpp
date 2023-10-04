#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number u want to convert : ";
  cin>>n;

  // octal to decimal 
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

  // decimal to binary 
 rem  ,mul =1;
  while(n>0){
    // rem = n%2;
    rem = n&1; // using bitwise operator

    // n = n/2;
    n = n>>1;  //using right sift operator
    

    ans+= rem*mul;

    mul *=10;

  }
  cout<<ans;
   


}