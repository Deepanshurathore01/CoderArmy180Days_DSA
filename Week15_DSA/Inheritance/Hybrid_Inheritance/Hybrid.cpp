#include<iostream>
using namespace std;

class Student{
public:
void print()
{
  cout<<"i am a student";
}
};
class Male
{
public:
void Maleprint()
{
  cout<<"i am male";
}
};

class FeMale
{
public:
void FeMaleprint()
{
  cout<<"i am female";
}
};

class Boy :public Student ,public Male
{
public:
void BoyPrint()
{
  cout<<"i am boy student";
}
};

class Girl :public Student ,public FeMale
{
public:
void GirlPrint()
{
  cout<<"i am girl student";
}
};

int main()
{
  // Girl G1;
  // G1.GirlPrint();
  // G1.print();
  Boy B1;
  B1.Maleprint();
}