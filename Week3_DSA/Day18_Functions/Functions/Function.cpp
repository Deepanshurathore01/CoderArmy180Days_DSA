#include<iostream>
using namespace std;

// Q The no is prime or not 
int Prime(int a){ // function declaration
// function defination
  if(a < 2)return 0;

  for(int i=1;i<a;i++){   
    if(a/i == 0 )return 0;
  }
return 1;
}

// calculate the factorial of the given number 

int fact(int a){
  int ans =1;
  for(int i=1;i<=a;i++){
     ans *=i;
  }
  return ans;
}

int main(){
  int n;
  cout<<"Enter a number  : ";
  cin>>n;

  int ans = Prime(n); //function call 
  cout<<ans<<endl;

  int f = fact(n);
  cout<<"the factorial of the given number is : "<<f<<endl;
 return 0;
}