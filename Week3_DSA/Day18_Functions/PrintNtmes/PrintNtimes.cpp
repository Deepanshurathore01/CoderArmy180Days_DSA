#include<iostream>
using namespace std;

void Ntimes(int n){
  for(int i=0;i<n;i++){
    cout<<"Coder Army "<<endl;
  }

}

int main(){
  int n;
  cout<<"Enter a number  : ";
  cin>>n;

  Ntimes(n);
 return 0;
}