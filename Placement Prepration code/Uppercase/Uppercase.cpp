#include<bits/stdc++.h>
using namespace std;

void changeToUpperCase(char c[]){
  int n = strlen(c);
  for(int i=0;i<n;i++){
    if(c[i]>= 'a' && c[i]<='z')
    c[i] = c[i] - 'a'+'A';
    
  }
}

int main(){
  char ch[100] ="Babbar";
  changeToUpperCase(ch);
  cout<<ch;
}