#include<iostream>
using namespace std;

int countvowel(string str,int index){
  if(index == -1)
  return 0;

// vowel
if(str[index] == 'a' || str[index] == 'e'|| str[index] == 'i'|| str[index] == '0' || str[index] == 'u')
{
  return 1+countvowel(str,index-1);
}
else
return countvowel(str,index-1);
}

int main(){
  string str= "Deepanshu";
  cout<<countvowel(str,str.size())<<" ";
}