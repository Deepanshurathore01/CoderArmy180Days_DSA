#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number ";
  cin>>n;

  int row ,col;

  for(row = 1;row<=n;row++){
    // spaces
    for(col =1;col<= n-row;col++){
      cout<<"  ";
    }

    // start
    for(col =1;col<=row;col++){
      cout<<"* ";
    }

    cout<<endl;
  }
}

/* output 

      * 
    * * 
  * * * 
* * * * 

*/