#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  // file ko open karna or write karna 
   ofstream fout;
   fout.open("zoom.txt"); //create karega an open karega 
  // write kr sakta hu 
  fout<<"Hello India";
  fout.close();//release the resources 
}