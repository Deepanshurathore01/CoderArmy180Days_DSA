#include<iostream>
using namespace std;

// recursive approch print 1 to n
void print(int n){
  // base condition 
  if(n == 1)
  {
    cout<<1<<" ";
    return ;
  }
  
  print(n-1);
  cout<<n<<" ";
}

// print even number's 
void printEven(int n){
  if(n==2){
    cout<<2<<" ";
    return;
  }
  cout<<n <<" ";
  printEven(n-2);
}

int main(){
  int n =8;

  // iterative approch 
  // for(int i=n;i>0;i--){
  //   cout<<i<<endl;
// }
  // print(n);
  printEven(n);
}