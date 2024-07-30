#include<iostream>
#include<string>
using namespace std;

int main()
{
//  string is a sequence of characters which is used to store the data dynamically.
string s = "Deepanshu";
string t =" Rathore";

string c = s+t;
// cin>>s;
// getline(cin , s);
s.push_back('R');
cout<<s<<endl;
s.pop_back();
s.pop_back();
cout<<s;
}