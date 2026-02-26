#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

bool Palindrome(char word[])
{
  int i=0;
  int n = strlen(word);
  int j= n-1;

  while(i<=j){
    if(word[i] != word[j]){
      return false;
    }
    else{
    i++;
    j--;

    }
  }
  return true;
  
}

int main(){
  char name[100] = "babbar";

 cout<<Palindrome(name);
  
}