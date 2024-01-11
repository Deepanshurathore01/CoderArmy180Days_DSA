#include<iostream>
using namespace std;

class Customer{
   string name; 
   int * data;

   public:

   Customer(){
    name ="4";
    cout<<"CC is "<<name<<endl;
   }
   Customer(string name){
    this->name =name;
    cout<<"Constructor is "<<name<<endl;
    
   }

   ~Customer(){
     cout<<"Destructor is "<<name <<endl;
   }
};

int main(){
  Customer C1("1"),C2("2"),C3("3");
  Customer *A4 = new Customer;
  delete A4;
}