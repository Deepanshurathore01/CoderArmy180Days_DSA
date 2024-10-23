#include<iostream>
using namespace std;

class Customer{
  private:
  string name;
  int balance;
  int age;

  public:
  Customer(string a,int b,int c){
    name=a;
    balance=b;
    age=c;
  }

  void deposite(int amount){
    if(amount > 0){
    balance +=amount;
    cout<<"you balance is : "<<balance;
    }
    else
    cout<<"Invalid amount";
  }

};

int main(){
  Customer c("Rohit",0,22);
  c.deposite(0);
}