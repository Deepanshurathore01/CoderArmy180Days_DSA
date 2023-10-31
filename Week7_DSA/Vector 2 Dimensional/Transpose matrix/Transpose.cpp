 #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// tc :- O(n^2)  , sc :- O(1)
 void transpose(vector<vector<int> >& matrix, int n)
    { 
        for(int i=0;i<n-1;i++){
           for(int j=i+1;j<n;j++)
             swap(matrix[i][j],matrix[j][i]);
        }
    }