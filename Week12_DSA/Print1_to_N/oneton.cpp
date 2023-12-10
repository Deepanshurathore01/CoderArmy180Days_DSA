#include<iostream>
using namespace std;
// print 1 t0 n with 2 arguments
void printN(int num, int N){
  // base case 
  if(num == N)
  {
    cout<<num<<" ";
    return ;
  }

  cout<<num<<endl;
  printN(num+1,N);
}

void printN2(int n){
  // base case 
  if(n==1){
    cout<<1<<" ";
    return ;
  }
  printN2(n-1);
  cout<<n<<" ";
}
int main(){

  int n ;
  cin>>n;
  // printN(1,n);
  printN2(n);
  return 0;
}