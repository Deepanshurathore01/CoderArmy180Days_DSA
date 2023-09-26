#include<iostream>
using namespace std;

int main(){
  int row ,col;
  for(row =0;row<5;row=row+1){
     for(char ch = 'A'; ch<='A'+row;ch++){
              cout<<ch<<" ";
              
          }
    cout<<endl;
  }
}