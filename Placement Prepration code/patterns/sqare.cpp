#include<iostream>
using namespace std;

int main()
{
  int n =4;
  for(int i=1;i<=n;i++)
  {

    for(int j =1;j<=i;j++)
    cout<<"1";

    for(int j =1;j<=n -i;j++)
    cout<<"0";

  cout<<endl;
  }
}