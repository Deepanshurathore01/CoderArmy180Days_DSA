#include<iostream>
#include<vector>
using namespace std;

void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
         
        
        
        // transpose matrix
         for(int i=0;i<n-1;i++){
           for(int j=i+1;j<n;j++)
             swap(matrix[i][j],matrix[j][i]);
        }
        
        
        
         for(int j =0 ;j<n;j++){
        int start =0 , end =n-1;
        while(start < end){
             int temp =matrix[start][j];
                matrix[start][j] =matrix[end][j];
                matrix[end][j] =temp;
                start++ ,end--;
        }
     }
    } 