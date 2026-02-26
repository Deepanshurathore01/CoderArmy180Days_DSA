/* Q1 print a patter for 5 row and columns start 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5*/

#include<iostream>
using namespace std;

int main(){


 int n;
 cin>>n;

 for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
    cout<<"*"<<" ";
    // cout<<"10"<<" ";
    // cout<<i<<" ";
    // cout<<j<<" ";
  }
  cout<<endl;
 }
   



  return 0;
}