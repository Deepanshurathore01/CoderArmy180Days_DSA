#include<iostream>
#include<string>
using namespace std;

int main()
{
  string s="1.1.1.1";
  // convert it into ip address 
  // brute force approch 
  int index =0 ;
  string ans;
  while(index < s.size())
  {
    if(s[index] == '.')
    {
      ans +='[';
      ans +='.';
      ans +=']';
    }
    else
    ans +=s[index];

  index++;
  }
  cout<<ans;

  return 0;
}