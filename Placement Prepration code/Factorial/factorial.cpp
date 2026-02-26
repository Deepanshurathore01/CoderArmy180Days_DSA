#include<iostream>
using namespace std;

int factorial(int n)
{
  if(n == 1)
  return 1;

return n* factorial(n-1);
}


int main()
{
  int n =5;
  int fact =1;
  for(int i=1;i<=n;i++)
   fact *=i;

  cout<<fact<<endl;
  cout<<factorial(n);

return 0;
}