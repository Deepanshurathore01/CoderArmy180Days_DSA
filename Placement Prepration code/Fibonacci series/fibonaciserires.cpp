#include<iostream>
using namespace std;

// recursiv 
int fibo(int n){
  if(n <= 1)
  return n;

 return fibo(n-1)+fibo(n-2);
}

int main()
{
  // iterative approch 
  int n=10;
  // int num1 =0 , num2 =1 ,num3 ;
  // cout<<"Finonacci seires is : "<<endl;
  // cout<<num1 <<" "<<num2<<" ";
  // for(int i=2;i<=n;i++){
  //   num3=num1+num2;
  //   cout<<num3<< " ";
  //   num1=num2;
  //   num2=num3;
  // }

  for(int i=0;i<n;i++)
  {
    cout<<fibo(i)<<" "; 
  }

return 0;
}