#include<iostream>
using namespace std;

int main(){
  int n ,pow ,i;
  cout<<"Enter a number :";
  cin>>n;
  cout<<"Enter the power :";
  cin>>pow;

  int num =n;

  for( i =1;i<pow;i++){
    num = num*n;
  }


  cout<<num;
  return 0;
}