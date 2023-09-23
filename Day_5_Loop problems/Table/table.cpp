#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number :";
  cin>>n;

  // for(int i =1;i<=10;i++){
  //   cout<<n<<"*"<<i<<" = "<<n*i<<endl;
  // }
  for(int i =n;i<=10*n;i =i+n){
      cout<<i<<" ";
  }
  return 0;
}