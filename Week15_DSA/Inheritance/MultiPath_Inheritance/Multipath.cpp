#include<iostream>
using namespace std;

class Human{
public:
string name;

display(){
  cout<<"my name is :"<<name<<endl;
}
};

class Engineer : public virtual Human
{
public:
string specilization;

void work()
{
  cout<<"I have specilization in "<<specilization<<endl;
}
};

class Youtuber : public virtual Human 
{
public:
int subscriber;

void contentcreator()
{
  cout<<"I have a subscriber base of "<<subscriber<<endl;
}
};

class CodeTeacher:public Engineer,public Youtuber
{
  public:
  int salary;
  CodeTeacher()
  {

  }

  CodeTeacher(string name,string specilization,int subscriber,int salary)
  {
    this->name =name;
    this->specilization =specilization;
    this->subscriber =subscriber;
    this->salary =salary;
  }

 
};

int main()
{
  CodeTeacher A1("Deepanshu","CSE",49000,99);
  A1.display();
}