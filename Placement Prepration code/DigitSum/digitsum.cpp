#include<iostream>
using namespace std;

int main()
{
  int num =1234;
  int sum =0;
  while(num){
    int dig =num%10;
    sum +=dig;
    num /=10;
  }

  cout<<"sum of the digits of number is : "<<sum ;
return 0;
}