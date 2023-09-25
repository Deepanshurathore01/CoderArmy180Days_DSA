#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number :";
  cin>>n;

  for(int i =1;i<=n;i = i+3){
    cout<<i<<" ";
  }
  return 0;
}