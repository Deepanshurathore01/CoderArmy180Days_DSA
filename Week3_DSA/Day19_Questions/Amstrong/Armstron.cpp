#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countDig(int x){
  int cnt =0;
  while(x){
    cnt++;
    x /=10;
  }
  return cnt;
}

bool armstrong(int num , int dig){
  int n =num, ans =0 , rem;
  while(n){
    rem = n%10;
    n /=10;
    ans = ans + pow(rem,dig);
  }
if(ans == num) return 1;

return 0;
}

int main(){
  int n;
  cout<<"Enater a number : ";
  cin>>n;

  int digit =countDig(n);
  cout<<armstrong(n,digit);
}