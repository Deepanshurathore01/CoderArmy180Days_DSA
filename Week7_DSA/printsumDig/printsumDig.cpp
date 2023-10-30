#include<iostream>
using namespace std;

void printsumDig(int matrix[][3], int row , int col ){
  int first =0 ,sec =0;
 
//  first digonal 
int i=0;
while(i<row){
  first += matrix[i][i];
  i++;
}

// second diagonal
int j = col -1;
i =0;
while(j>=0){
  sec += matrix[i][j];
  i++ , j--;
}

cout<<first <<" "<<sec;
}

int main(){
  int matrix[3][3] ={1,2,3,4,5,6,7,8,9};

  printsumDig(matrix,3,3);
}