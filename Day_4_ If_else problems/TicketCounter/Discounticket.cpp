#include<iostream>
using namespace std;

int main(){
  int age ;
  cout<<"Enter ur age : ";
  cin>>age;

  if(age <=12 ){
    cout<<"Yes are u eligible for discount";
  }
  else if(age >65){
    cout<<"Yes are u eligible for discount";
  }
  else{
    cout<<"No are u eligible for discount";
  }
  return 0;
}