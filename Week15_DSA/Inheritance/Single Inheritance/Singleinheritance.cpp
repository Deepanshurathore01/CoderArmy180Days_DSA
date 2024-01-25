#include<iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:
    Human(string name ,int age){
      this->name=name;
      this->age=age;
    }
};

class Student : public Human{
   private:
   int roll_no;
   int fees;

   public:
   Student(string name,int age,int roll_no,int fees):Human(name ,age)
   {
    this->roll_no=roll_no;
    this->fees=fees;
   }

   void display(){
    cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
   }
};

int main()
{
  Student A1("Rohit",12,1024,34);
  A1.display();
}