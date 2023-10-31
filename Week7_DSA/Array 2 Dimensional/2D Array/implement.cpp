#include<iostream>
using namespace std;

// print col wise 
void printcol(int arr[][4],int row ,int col)
{
  for(int j =0;j<col;j++){
    for(int i=0;i<row;i++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  int arr[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12};

  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      cout<<arr[i][j]<< " ";
    }
  }
  cout<<endl;

  printcol(arr,3,4);
  return 0;
}