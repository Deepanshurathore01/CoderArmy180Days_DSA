#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

void reverse(char name[])
{
  int i=0;
  int n = strlen(name);
  int j= n-1;

  while(i<=j){
    swap(name[i], name[j]);
    i++;
    j--;
  }
  
}

int main(){
  char name[100];
  cin>>name;

  cout<<"Before : "<<name;
  reverse(name);
  cout<<"After : "<<name;
  
}