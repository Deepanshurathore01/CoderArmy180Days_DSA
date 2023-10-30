#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printrowmax(int arr[][4],int row,int col){
  int sum = INT_MIN , index =-1;
  for(int i =0 ;i<row;i++){
    int total = 0;
    for(int j=0;j<col;j++)
    total += arr[i][j];

    if(sum < total){
      sum = total;
      index =i;
    }
  }
  cout<<index ;
}
int main(){
  int arr[3][4] = {1,2,3,4,5,6,7,8,1,0,1,1};

  printrowmax(arr,3,4);
}