#include<iostream>
using namespace std;

class Customer{
string name;
int acc_no , balance;
static int total_customer;

public:

Customer(string name,int acc_no,int balance){
this->name =name;
this->acc_no =acc_no;
this->balance =balance;
total_customer++;
}

display(){
  cout<<name<<" "<<acc_no<<" "<<balance<<" "<<endl;
  cout<<total_customer;
}
};

int Customer :: total_customer =0; 

int main()
{
  Customer A1("Rohit",1,1000);
  Customer A2("Deepanshu",2,1800);
  Customer A3("Deepanshu",3,1800);
  A1.display();
  A2.display();
  A3.display();
}