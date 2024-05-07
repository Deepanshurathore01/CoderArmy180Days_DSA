#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class person{
  public :
  int age;
  string name;

   bool operator<(const person &other) const{
    return age>other.age;
   }
};

int main()
{
  // set<int>s;
  // set<int,greater<int> >s; //for store the values in desending order 
  // // insert
  // s.insert(10);
  // s.insert(20);
  // s.insert(110);
  // s.insert(12);
  // s.insert(10);
  // s.insert(4);
  // s.insert(160);

  // search the element
  // find function

  // if(s.find(2) !=s.end()). //return the iterator of this number 

  // if(s.count(10))  //count of that no
  // cout<<"present\n";
  // else
  // cout<<"absent\n";

  // cout<<s.count(1);

  // for(auto it =s.begin(); it!=s.end();it++)
  // {
  //   cout<<*it<< endl;
  // }

  // delete 
  // s.erase(110);
  // cout<<s.count(110)<<endl;

  set<person>s;
  person p1,p2,p3;
  p1.age=10,p1.name= "rohit";
  p2.age=30,p2.name= "aman";
  p3.age=5,p3.name= "chatur";
s.insert(p1);
s.insert(p2);
s.insert(p3);

for(auto it =s.begin(); it!=s.end();it++)
  {
    cout<<(*it).age<<" "<<(*it).name << endl;
  }
}