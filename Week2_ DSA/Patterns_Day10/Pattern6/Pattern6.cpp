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
      cout<<" ";
    }
    for(col =1;col<=row;col++){
      cout<<"* ";
    }

    cout<<endl;
   }

}


/*
output

   *
  * *
 * * *
* * * *


*/