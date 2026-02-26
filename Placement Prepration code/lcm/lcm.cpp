#include<iostream>
using namespace std;

int fastExponetial(int a,int b){
  int ans =1;
  while(b>0){
    if(b&1){
      ans = ans*a;
    }
    a = a*a;
    b>>=1;
  }
  return ans;
}

int slowExponential(int a,int b){
  int ans =1;
  for(int i=0;i<b;++i){
    ans *=a;
  }
  return ans;
}
// tc : o(b)

int main(){
  cout<<slowExponential(5,4)<<endl;
  cout<<fastExponetial(5,4)<<endl;
  return 0;
}