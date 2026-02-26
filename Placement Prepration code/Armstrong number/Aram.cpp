#include<iostream>
using namespace std;

int main()
{
  int num =153;
  int temp =num , sum =0;
  while(temp){
    int dig =temp%10;
    sum +=dig*dig*dig;
    temp /=10;
  }

  if(num == sum)
  cout<<"The given number is armstrong"<<endl;
  else
  cout<<"Not an armastrong number"<<endl;

return 0;
}