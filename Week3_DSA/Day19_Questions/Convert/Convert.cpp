#include<iostream>
using namespace std;

char conver(char name){
  char ans = name - 'a'+'A';
  return ans ;
}

int main(){
  char name ;
  cout<<"Enter a character by ur choice : ";
  cin>>name;

  cout<<conver(name);
}