#include<iostream>
#include<vector>
using namespace std;

void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
         
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int temp =matrix[i][j];
                matrix[i][j] =matrix[j][i];
                matrix[j][i] =temp;
            }
        }

        // for revers row
        for(int i=0;i<n;i++){
            int start =0 , end=n-1;
            while(start < end){
                int temp =matrix[i][start];
                matrix[i][start] =matrix[i][end];
                matrix[i][end] =temp;
                start++ ,end--;
            }
        }
    } 