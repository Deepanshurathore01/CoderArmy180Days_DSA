#include<iostream>
using namespace std;

// Description: Write a program to check if a string or number is a palindrome.
bool isPalindrome(string s){
  int start =0 ,end =s.size()-1;
  while(start<=end){
    if(s[start] !=s[end])
    return false;

   start++;
   end--;
  }
  return true;
}
int main()
{
  string s="baaba";
  if(isPalindrome(s))
  cout<<"the string is palindrome";
  else
  cout<<"the string is not a palindrome";

return 0;
}