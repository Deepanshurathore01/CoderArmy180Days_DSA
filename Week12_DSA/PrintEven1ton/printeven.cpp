#include<iostream>
using namespace std;

void printeven(int num,int N){
  if(num > N){
    // cout<<num;
    return;
  }
  cout<<num<<endl;
  printeven(num+2,N);
}

void printeven2(int n){
  if(n == 2){
    cout<<2<<" ";
    return ;

  }

  printeven2(n-2);
  cout<<n<<" ";
}
void printodd(int n){
  if(n == 1){
    cout<<1<<" ";
    return ;

  }

  printodd(n-2);
  cout<<n<<" ";
}
int main(){
  // print even
  int N;
  cin>>N;
  if(N%2 == 0)
  N--;

printodd(N);
  return 0;
}