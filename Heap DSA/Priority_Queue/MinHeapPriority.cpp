#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
  priority_queue<int , vector<int>, greater<int> >p ; // min heap
  p.push(8);
  p.push(20);
  p.push(3);
  p.push(6);
  p.push(21);

  // p.pop();
  // cout<<p.top()<<" ";
  while(!p.empty())
  {
    cout<<p.top()<<" ";
    p.pop();
  }
}
