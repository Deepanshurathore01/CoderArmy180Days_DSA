#include<iostream>
#include<string>
using namespace std;

bool compareString(string a,string b){
  if(a.length() != b.length()){
    return false;
  }

  for(int i=0;i<a.length();i++){
       if(a[i] != b[i]) return false;
}

return true;
}

int main(){

  //  string str = "Babbar";
  //  cout<<str<<endl;
  //  cout<<str.length()<<endl;
  //  str.push_back('A');
  //  cout<<str<<endl;
  //  str.pop_back();
  //  cout<<str<<endl;
  //  cout<<str.substr(0, 4);
  //  string str2 ="aabbar";
  //  cout<<compareString(str,str2);

  // string str ="this is my new stirng ";
  // string word ="gabbar";
  // str.replace(0,4,word);
  // cout<<str;

  // string str2 ="ABCDEFGHIJKLMNOPQRST";
  // str2.erase(5,10);
  // cout<<str2<<endl;

  string str1 ="this is my string my exam is going on";
  string target ="examkall";
  // cout<<str1.find(str2);
  if(str1.find(target) == string::npos){
    cout<<"Not found";
      }


   



  return 0;
}