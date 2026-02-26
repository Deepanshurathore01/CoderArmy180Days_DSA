#include<iostream>
using namespace std;

int main(){
  char name[100];
  cout<<"Enter your name : ";
  cin.getline(name,50);
  cin >> name[3];
  cin>> name[49];
  

  cout<<" your name is : "<<name;
  cout<<name[3];
  cout<<name[49];




  return 0;
}