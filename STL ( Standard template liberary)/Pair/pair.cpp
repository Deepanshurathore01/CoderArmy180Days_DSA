#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
//  pair<string,int>p;

//  two methods
// first method
// p=make_pair("Deepanshu",21);
//second method
// p.first ="Aman";
// p.second =12;
// cout<<p.first<<" "<<p.second<<" ";

// if we want to add name age weight in pair

// pair<string,pair<int,int> >p;
// p.first ="Rahul";
// p.second.first=25;
// p.second.second=80;
// p =make_pair("rohit",make_pair(25,80));
// cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<" ";

pair<pair<string,int>, int> p;
p=make_pair(make_pair("rahul",24),46);

cout<<p.first.first<<" "<<p.first.second<<" "<<p.second;



}