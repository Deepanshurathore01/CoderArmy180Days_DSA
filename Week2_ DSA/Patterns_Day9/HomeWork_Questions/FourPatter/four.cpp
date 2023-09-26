#include<iostream>
using namespace std;

int main(){
  int row ,col;
  for(row =4;row>1;row=row-1){
     for(char ch = 'A'; ch<='A'+row;ch++){
              cout<<ch<<" ";
              
          }
    cout<<endl;
  }
}