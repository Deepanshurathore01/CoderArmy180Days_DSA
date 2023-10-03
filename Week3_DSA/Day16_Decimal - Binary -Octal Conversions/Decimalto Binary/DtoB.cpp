#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number : ";
  cin>>n;

  int rem , ans=0 ,mul =1;
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