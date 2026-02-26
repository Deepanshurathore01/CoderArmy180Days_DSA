#include<iostream>
using namespace std;

int fibo(int n){
  if(n <=1 )
  return n;

 return fibo(n-1)+fibo(n-2);
}

int main(){
  int n =3;
  int index=0;

   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++){
      int num =fibo(index);
      cout<<num<< " ";
      index++;
    }
    cout<<endl;
   }
  
}