#include<iostream>
using namespace std;

int main()
{
  int a =10;
  int * p;
  p = &a;
  cout<<p<<endl;
  cout<<*p<<endl;
  int b =20;
  p=&b;
  cout<<p<<endl;
  cout<<*p<<endl;
  b =90;
  cout<<*p<<endl;
}