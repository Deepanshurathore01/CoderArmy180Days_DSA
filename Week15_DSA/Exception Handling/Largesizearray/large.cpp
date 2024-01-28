#include<iostream>
#include<exception>
using namespace std;



int main()
{
  try{
  int *p =new int[10000000000];
  cout<<"Memory aloocation is successfull\n";
  delete []p;
  }
  catch(const bad_alloc &e)
  {
    cout<<"Exception Occured: "<<e.what()<<endl;
  }
}