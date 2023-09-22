#include<iostream>
using namespace std;

int main(){
  int n, fac =1;
  cout<<"Enter a number :";
  cin >>n;

  if(n < 2){
    cout<<" Number is not prime ";
    return 0;
  }
  else{
    for(int i=2;i<n;i++){
      if(n%i == 0){
        cout<<"No is not prime";
        return 0;
      }
    }
    cout<<"prime";
  }
}