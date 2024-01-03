#include<iostream>
using namespace std;

class Student{
public:
string name;
int age ,roll_no;
string grade;

public:
void setname(string s){
  if(s.size()==0)
  {
    cout<<" invalid name";
    return;
  }
  name =s;
}
void setage(int a)
{
  age =a;
}
void setrollnum(int b){
  roll_no=b;
}

void setgrade(string g){
  grade =g;
}

// print the value
void getname(){
  cout<<name<<" ";
}

void getage(){
  cout<<age<<" ";
}

int getrollnum(){
  return roll_no;
}

};

int main(){
  Student s1;
  s1.setname("");
  s1.setage(20);
  s1.setrollnum(1024);
  s1.setgrade("A++");
  s1.getname();
  cout<<" "<<s1.getrollnum();
}