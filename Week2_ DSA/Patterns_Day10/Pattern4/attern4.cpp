#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the nubember :";
  cin>>n;

   int row;
   for(row =1;row<=n;row++){
    // space
    for(int col =1;col<= n-row;col++){
      cout<<"  ";
    }
    for(char col ='A';col<='A'+row-1;col++){
      cout<<col<<" ";
    }

    cout<<endl;
   }

}

/* output


Enter the nubember :4
      A
    A B
  A B C
A B C D
*/
