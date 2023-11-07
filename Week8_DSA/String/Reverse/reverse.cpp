#include<iostream>
using namespace std;

int main(){
  string s = "Deepanshu";
  int start =0 , end =s.size()-1;
  while(start < end){
    swap(s[start],s[end]);
    start++ , end--;
  }
  cout<<s;
}