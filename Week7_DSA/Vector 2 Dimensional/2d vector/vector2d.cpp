#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
//  int n , m;
//  cout<<"Enter the value of n and m";
//  cin>>n>>m;

 vector< vector<int> > matrix(3 , vector<int>(4 , 0));

//  for(int i=0;i<n;i++){
//   for(int j=0;j<m;j++){
//     cin>>matrix[i][j];
//   }
//  }

//  for(int i=0;i<n;i++){
//   for(int j=0;j<m;j++){
//     cout<<matrix[i][j]<<" ";
//   }
//   cout<<endl;
//  }

cout<<"Rows = "<<matrix.size()<<endl;
cout<<"Cols = "<<matrix[0].size()<<endl;
}