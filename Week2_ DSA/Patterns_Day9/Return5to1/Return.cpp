#include<iostream>
using namespace std;

int main(){

  for(int row =1;row<=5;row =row+1){
    for(int col =5;col>=5-row+1;col=col-1){
      cout<<col<<" ";
    }
    cout<<endl;
  }
}