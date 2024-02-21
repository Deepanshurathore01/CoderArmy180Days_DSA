#include<iostream>
#include<string>
using namespace std;

int lengthofArray(string arr)
{
  int len =0 ,i=0;
  while(arr[i] !='\0')
  {
    len++;
    i++;
  }
  return len;
}

// reverse the string 
string reverse(string s)
{
  
  int i =0 ,j =lengthofArray(s)-1;
  while(i<=j)
  {
    swap(s[i],s[j]);
    i++;
    j--;
  }
return s;
}

string ToUppercase(string s)
{
  int  n =lengthofArray(s)-1;
  for(int i=0;i<n;i++)
  {
    s[i] = s[i] -'a'+'A';
  }
  return s;
}

string ToLowercase(string s)
{
  int  n =lengthofArray(s);
  for(int i=0;i<n;i++)
  {
    s[i] = s[i] + 'a'-'A';
  }
  return s;
}

void replaceSpace(string &s)
{
  int i =0 ,j =lengthofArray(s)-1;
 for(i=0;i<j;i++)
 {
  if(s[i]==' ')
  s[i] ='@';
 }
}




int main()
{
  string a="DEEPANSHU";
  // int l =lengthofArray(a);
  // string r =reverse(a);
  // cout<<"the length of the char array is : "<<l<<endl;
  // cout<<"the rev of the string is : "<<r<<endl;
  // replaceSpace(a);
  // if(a == r)
  // cout<<"string is palindrome"<<endl;
  // else
  // cout<<"the string is not palindrome : "<<endl;
  //  cout<<"the uppercase string is : "<<ToUppercase(a)<<endl;
   cout<<"the uppercase string is : "<<ToLowercase(a)<<endl;
     
return 0;
}