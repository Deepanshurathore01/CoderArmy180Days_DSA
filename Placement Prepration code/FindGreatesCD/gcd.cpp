#include<iostream>
using namespace std;

int main()
{
  int n1 =12, n2=15;
  int gcd =1;
  for(int i=2;i<=n1 && i<=n2;i++)
  {
      if(n1%i==0 && n2%i==0)
      gcd =i;
  }

  int lcm =(n1*n2)/gcd;

  cout<<"the gcd is : "<<gcd<<endl;
  cout<<"the lcm is : "<<lcm<<endl;
return 0;
}