#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
ofstream fout;
fout.open("z1.txt");
fout<<"Hello india\n";
fout<<"Hello Deepanshu\n";
fout<<"Hello Bhai\n";
fout.close();

ifstream fin;
fin.open("z1.txt");

string line;
while(getline(fin,line))
{
  cout<<line<<endl;
}
fin.close();
}