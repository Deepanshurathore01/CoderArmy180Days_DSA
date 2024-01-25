#include<iostream>
using namespace std;

class Complex {
int real , img;
public:
Complex()
{
  
}

Complex(int real,int img)
{
  this->real =real;
  this->img =img;
}
void display()
{
  cout<<real<<"+i"<<img<<endl;
}
Complex operator +(Complex &c){
  Complex ans;
  ans.real =real +c.real;
  ans.img =img+c.img;
  return ans;
}
};

int main()
{
  Complex c1(3,4);
  Complex c2(4,6);

  Complex c3 =c1+c2;
  c3.display();
}