#include<iostream>
using namespace std;

int main(){
  int n ,sum =0 ,i;
  cout<<"Enter a number :";
  cin>>n;

  // for( i =1;i<=n;i++){
  //   sum +=i*i;
  // }

// using formula 
  cout<<(n*(n+1)*(2*n+1)) / 6;


  // cout<<sum;
  return 0;
}