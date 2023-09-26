#include<iostream>
using namespace std;

int main(){
  int row ,col;
  for(row =10;row<=15;row =row+1){
    for(col = 10;col<=row;col = col+1){
      cout<<col<<" ";
    }
    cout<<endl;
  }
}