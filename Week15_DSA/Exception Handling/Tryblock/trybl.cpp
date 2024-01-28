#include<iostream>
#include<exception>
using namespace std;

class InvalidAmnt: public runtime_error
 {
  public:
  InvalidAmnt(const string msg): runtime_error(msg)
  {}
};
class InsufficentBalerror: public runtime_error
 {
  public:
  InsufficentBalerror(const string msg): runtime_error(msg)
  {}
};

class Customer
{
 string name;
 int balance , acc_no;

 public:
 Customer(string name,int balance ,int acc_no)
 {
  this->name =name;
  this->balance =balance;
  this->acc_no =acc_no;
 }

//  deposite 
void deposite(int amount)
{
  if(amount >0)
  {
    balance +=amount;
    cout<<amount<<" rs is creadited sucessfully\n";
  }
  else{
    throw InvalidAmnt("Amount should be greater then zero");
  }
}
// withdraw
void withdraw(int amount){
  if(amount >0 && amount <=balance)
  {
    balance -=amount;
    cout<<amount<<" rs is debited sucessfully \n";
  }
  else if(amount < 0){
  throw InvalidAmnt("amount should be greater then 0");
  }
  else{
    throw InsufficentBalerror("your balance is low");
  }
}
};
int main()
{
   Customer C1("Rohit",5000,10);
   try{
   C1.deposite(100);
   C1.withdraw(6000);
   C1.deposite(200);
   }
   catch(const InvalidAmnt &e)
   {
    cout<<"Exception Occured : "<<e.what()<<endl;
   }
   catch(const InsufficentBalerror &e)
   {
    cout<<"Exception Occured : "<<e.what()<<endl;
   }
   catch(...){
    cout<<"Exception Occured :"<<endl;
   }
}