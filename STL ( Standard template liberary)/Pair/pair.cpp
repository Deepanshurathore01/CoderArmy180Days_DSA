#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  pair<string ,int>p;
  // first method 
  // p =make_pair("Deepanshu",21);

  // second method 
  // p.first="Deepanshu";
  // p.second=21;

  // Multiple values name age  or weight
  pair<string,pair<int,int> >p;
  // p.first ="Deepanshu";
  // p.second.first=21;
  // p.second.second=46;
  p=make_pair("deep",make_pair(21,46));
  cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
}