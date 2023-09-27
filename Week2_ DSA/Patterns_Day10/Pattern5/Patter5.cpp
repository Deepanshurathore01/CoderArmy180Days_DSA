#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the nubember :";
  cin>>n;

   int row ,col;
   for(row =1;row<=n;row++){
    // space
    for(col =1;col<= n-row;col++){
      cout<<"  ";
    }
    for(col =row;col>=1;col--){
      cout<<col<<" ";
    }

    cout<<endl;
   }

}


/*
output 
      1 
    2 1 
  3 2 1 
4 3 2 1 



*/
