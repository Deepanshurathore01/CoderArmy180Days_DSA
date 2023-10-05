#include<iostream>
using namespace std;

// calculate the cube of the given number 

int cube(int a){
  int ans  = a*a*a;
  return ans;
}

int main(){
  int n;
  cout<<"Enter a number  : ";
  cin>>n;

  int f = cube(n);
  cout<<"the cube of the given number is : "<<f<<endl;
 return 0;
}