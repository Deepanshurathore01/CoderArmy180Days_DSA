#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  ifstream fin;
  // file ko open karo then read karo
  fin.open("zoom.txt");
  char c;
  c =fin.get();
  while(!fin.eof())
  {
    cout<<c;
    c =fin.get();
  }

  fin.close();
}