#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int length(char name[])
{
  int length = 0 , i =0;
  while(name[i] != '\0'){
    length++;
    i++;
  }
  return length;
}

int main(){
  char name[100];
  cin>>name;
  cout<<length(name)<<endl;
  cout<<strlen(name);
}