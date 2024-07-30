#include<iostream>
#include<string>
using namespace std;

int main()
{
//  string is a sequence of characters which is used to store the data dynamically.

string s ="Deepanshu";
int l =0 , h=s.size()-1;
while(l<h)
{
  int temp =s[l];
  s[l]=s[h];
  s[h]=temp;
  l++;
  h--;
}
cout<<s;
return 0;
}
// Tc:O(n)
// Sc :O(1)