#include<iostream>
using namespace std;

class Human
{
  string Religion,color;
  public:
  string name;
  int age,weight;
  
};

class student: public Human
{
  private:
  int roll_no,fees;

   public:

   student(string name,int age,int weight,int roll_no,int fees){
    this->name =name;
    this->age =age;
    this->weight =weight;
    this->roll_no =roll_no;
    this->fees =fees;
   }
   void display()
   {
    cout<<name<<" age is "<<age<<",weight is"<<weight<<" roll no is"<<roll_no<<" fess is"<<fees<<endl;
   }
  
};

class Teacher: public Human
{
  int salary,id;
};

int main(){
  student A("deepanshu",12,45,1242,1000);
  A.display();
  Teacher B;
  B.name="Mohit";
}