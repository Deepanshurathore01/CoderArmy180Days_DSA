#include<iostream>
using namespace std;

void RevRow(int matrix[][3],int row,int col){
  for(int i=0;i<row;i++){
    int start =0 , end = col -1 ;

    while(start < end){
      swap(matrix[i][start],matrix[i][end]);
      start++ ,end--;
    }
  }
}

int main(){
  int matrix[3][3] ={1,2,3,4,5,6,7,8,9};

  RevRow(matrix,3,3);

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<matrix[i][j] <<" ";
    }
    cout<<endl;
  }
}