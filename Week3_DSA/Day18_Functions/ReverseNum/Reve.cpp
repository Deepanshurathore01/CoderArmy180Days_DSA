#include<iostream>
using namespace std;

// calculate the cube of the given number
int reverse(int a){
  int ans  =0, rem ;
  while(a){
    rem = a%10;
    a /=10;
    ans = ans*10 +rem;
  }
  return ans ;
}

int main(){
  int n;
  cout<<"Enter a number  : ";
  cin>>n;

  int f = reverse(n);
  cout<<"the reverse of the given number is : "<<f<<endl;
 return 0;
}