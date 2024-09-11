#include<iostream>
using namespace std;

int main()
{
  int n =12231;
  int ans =0 , num = n;
  while(num)
  {
    int dig =num%10;
    ans = (ans*10)+dig;
    num =num/10;
  }

  if(ans == n)
  cout<<"Palindrome";
  else
  cout<<"Not palindrome";

 return 1;
}