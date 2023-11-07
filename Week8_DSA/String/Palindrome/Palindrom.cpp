#include<iostream>
using namespace std;

int main(){
  string s = "mada";
  int start =0 , end =s.size()-1;
  while(start < end){
    if(s[start] != s[end]){
      cout<<"String is not palindrome";
      return 0;
    }
    start++ , end--;
  }

  cout<<"string is palindrome";
}