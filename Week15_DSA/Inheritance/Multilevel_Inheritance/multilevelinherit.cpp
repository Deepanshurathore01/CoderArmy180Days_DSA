#include<iostream>
using namespace std;

class Person
{
protected:
string name;

public:
void introduce()
{
  cout<<"my name is :"<<name<<endl;
}
};

class Employee :public Person
{
protected:
int salary;

public:
void monthly_salary()
{
  cout<<"My monthly salary is :"<<salary<<endl;
}
};

class Manager: public Employee
{
  public:
  string department;

  Manager(string name,int salary,string department)
  {
    this->name =name;
    this->salary=salary;
    this->department=department;
  }
  public:
    void work()
    {
      cout<<"i am working on "<<department<<" department"<<endl;
    }
};

int main(){
  Manager A1("Deepanshu",100000,"Technical");
  A1.introduce();
  A1.monthly_salary();
  A1.department ="ro";
  A1.work();
}