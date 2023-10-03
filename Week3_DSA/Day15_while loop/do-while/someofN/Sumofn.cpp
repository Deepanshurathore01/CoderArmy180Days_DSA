#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter the number : ";
  cin>>n;
  int sum =0;
 int i=1;
  do{
    sum +=i;
    i++;
  }while(i<=n);

  cout<<" the sum of n number is : "<<sum;
}