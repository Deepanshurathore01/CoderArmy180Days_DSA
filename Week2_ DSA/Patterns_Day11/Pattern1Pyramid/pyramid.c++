#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

for(int row =1;row<=n;row++){
  // space
  for(int col =1;col<=n-row;col++){
    cout<<"  ";
  }

  // start 
  for(int col =1;col<=2*row-1;col++){
    cout<<"* ";
  }
  cout<<endl;
}

return 0;
}