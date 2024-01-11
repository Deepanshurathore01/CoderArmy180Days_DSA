#include<iostream>
using namespace std;

class Customer {

string name;
int account_no;
int balance;

public :
// Defaul constructor
Customer(){
name ="Deepanshu";
account_no =1242;
balance =1000;
}
// parametrized constructor
// Customer(string name,int account_no,int balance){
//  this-> name =name;
//  this-> account_no =account_no;
//  this-> balance =balance;
// }
// constructor overloading
Customer(string a ,int b){
  name =a;
  account_no =b;
  balance =50;
}

// Inline Constructor 
inline Customer(string a,int b,int c):name(a),account_no(b),balance(c){

}

// copy Constructor
Customer(Customer &B){
  name =B.name;
  account_no =B.account_no;
  balance =B.balance;
}

void display(){
  cout<<name<<" "<<account_no<<" "<<balance<<endl;
}

};

int main(){
  Customer A1;
  Customer A2("Rohit",12,2400);
  Customer A3("Adi",12);
  A1.display();
  A2.display();
  A3.display();
  Customer A4(A3);
  A4.display();  
  Customer A5;
  A5 = A1;
  A5.display();
}