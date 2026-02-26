#include<iostream>
using namespace std;

int main()
{
 string s ="programming";
 string ans ="";
 for(int i=s.size();i>=0;i--)
 {
   ans +=s[i];
 }
 cout<<s<<endl;
 cout<<ans<<endl;

return 0;
}