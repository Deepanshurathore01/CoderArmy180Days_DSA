#include<bits/stdc++.h>
using namespace std;

void changeToUpperCase(char c[]){
  int n = strlen(c);
  for(int i=0;i<n;i++){
    if(c[i]>= 'A' && c[i]<='Z')
    c[i] = c[i] - 'A'+'a';
    
  }
}

int main(){
  char ch[100] ="BaBBAR";
  changeToUpperCase(ch);
  cout<<ch;
}