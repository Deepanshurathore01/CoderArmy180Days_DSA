/* Q2 Reverse pattern
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1*/

#include<iostream>
using namespace std;

int main(){


 int n;
 cin>>n;

//  1st Method 
//  int num =1;

//  for(int i=1;i<=n;i++){
//   for(int j=n;j>=1;j--){
//     cout<<num<<" ";
//     num = num+1;
//   }
//   cout<<endl;
//  }

// second Method 

for(int row=1;row<=n;row++){
  for(int col=1;col<=n;col++){
   cout<<(row - 1)*5+col<<" ";
}
cout<<endl;
}
   



  return 0;
}