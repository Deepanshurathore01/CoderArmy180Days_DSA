#include<iostream>
using namespace std;

int main(){
  int num;
  cout<<"Enter a Number : ";
  cin>>num;

  if(num > 0){
    cout<<"positive ";
  }
  else if(num ==0){
    cout<<"Zero ";
  }
  else{
    cout<<"Negative";
  }
}