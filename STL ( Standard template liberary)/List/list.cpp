#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  list<int>l;
  l.push_back(2);
  l.push_back(3);
  l.push_front(4);
  l.push_front(5);
  l.push_front(9);
  l.push_front(50);
  l.pop_front();
  l.pop_back();
  // cout<<l.front()<<endl;
  // cout<<l.back()<<endl;
  // cout<<l.size();
  // iterate over the list 

  // for(auto it =l.begin(); it!=l.end(); it++)
  // {
  //   cout<<*it<<" ";
  // }
  for(auto it =l.rbegin(); it!=l.rend(); it++)
  {
    cout<<*it<<" ";
  }
}