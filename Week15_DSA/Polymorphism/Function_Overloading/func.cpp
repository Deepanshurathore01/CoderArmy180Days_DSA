#include<iostream>
using namespace std;

class Area{

public:
int calArea(int r)
{
  return 3.14*r*r;
}

int calArea(int l,int b)
{
  return l*b;
}
};

int main()
{
  Area A1,A2;
  cout<<A1.calArea(4)<<endl;
  cout<<A2.calArea(3,4)<<endl;
}