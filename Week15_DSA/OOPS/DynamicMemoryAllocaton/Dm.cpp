#include<iostream>
using namespace std;

class Student{
public:
string name;
int age ,roll_no;
string grade;
};

int main(){
  Student * s = new Student;
  (*s).name="Deepanshu";
  (*s).age=23;
  (*s).roll_no=32;
  (*s).grade="A+";

  cout<<s->name<<" "<<endl;
  cout<<s->age<<" "<<endl;
  cout<<s->roll_no<<" "<<endl;
  cout<<s->grade<<" "<<endl;
}