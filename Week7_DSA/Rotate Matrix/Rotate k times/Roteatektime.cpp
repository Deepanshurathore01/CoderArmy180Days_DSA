#include<iostream>
#include<vector>
using namespace std;

void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
         
         for(int i=0;i<n-1;i++){
           for(int j=i+1;j<n;j++)
             swap(matrix[i][j],matrix[j][i]);
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

    int main(){
      vector<vector<int> > matrix ={{1,2,3},{4,5,6},{7,8,9}};
      int k =1;
     int n =matrix.size();
      k = k%4;
      while(k--){
        rotateby90(matrix,n);
      }
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
       }
    }