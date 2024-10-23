#include<iostream>
using namespace std;

int main(){
  int n ,sum =0 ,i;
  cout<<"Enter a number :";
  cin>>n;

  for( i =1;i<=n;i++){
    sum +=i;
  }

// using formula 
  // cout<<(n * (n+1))/2;


  cout<<sum;
  return 0;
}