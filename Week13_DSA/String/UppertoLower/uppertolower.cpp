#include<iostream>
using namespace std;

void Uppertolower(string &str,int index){
  if(index ==-1)
  return ;

str[index] ='a'+str[index]-'A';
Uppertolower(str,index-1);
}
int main()
{
  string str ="ROHIT";
  Uppertolower(str,4);
  cout<<str<<endl;
}