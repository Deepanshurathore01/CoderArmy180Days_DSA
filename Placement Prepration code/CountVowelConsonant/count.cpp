#include<iostream>
using namespace std;

int main()
{
  string s="hello world Deepanshu";
  int cntVowel =0 ,countCons =0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u' )
    cntVowel++;
    else
    countCons++;
  }

  cout<<"No of vowel's is : "<<cntVowel<<endl; 
  cout<<"No of consonant's is : "<<countCons<<endl; 
return 0;
}