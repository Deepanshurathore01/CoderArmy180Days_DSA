#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int num =0;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<num++<<" ";
    }
    cout<<endl;
  }
}