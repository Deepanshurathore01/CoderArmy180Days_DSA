#include<iostream>
#include<vector>
using namespace std;

// 1st method
// tc : o(n^2) , sc:o(1)
void rotate(vector<vector<int> >& matrix) {
        // Code here
        int n =matrix.size();
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

// 2nd method 
// tc : o(n^2)  , sc:o(1)
 void rotate(vector<vector<int> >& matrix) {
        // Code here
    //   col reverse 
    int n =matrix.size();
    for(int j =0 ;j<n;j++){
        int start =0 , end =n-1;
        while(start < end){
             int temp =matrix[start][j];
                matrix[start][j] =matrix[end][j];
                matrix[end][j] =temp;
                start++ ,end--;
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