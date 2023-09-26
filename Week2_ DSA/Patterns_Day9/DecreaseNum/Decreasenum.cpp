#include<iostream>
using namespace std;

int main(){
  
  for(int row=1;row<=5;row++){
    for(int col=row;col>=1;col--){
      cout<<col<<" ";
    }
    cout<<endl;
  }
}