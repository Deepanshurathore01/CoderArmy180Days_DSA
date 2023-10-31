#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printWave(int matrix[][3],int row ,int col){
  for(int j=0;j<col;j++){
    if(j%2 ==0){
      for(int i=0;i<row;i++){
        cout<<matrix[i][j]<<" ";
    }
    }
    else{
      for(int i=row-1;i>=0;i--){
        cout<<matrix[i][j]<<" ";
    }
    }
  }
}

int main(){
  int matrix[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
 
 printWave(matrix,4,3);

 for(int i=0;i<4;i++){
  for(int j=0;j<3;j++)
  cout<<matrix[i][j]<<" ";
 }
}