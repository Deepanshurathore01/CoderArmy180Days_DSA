#include <iostream> 
#include<vector>

// tc : o(log(n*m))  , sc: o(1)
bool findInMatrix(int target, vector<vector<int>> &mat)
{
    int n =mat.size();
         int m =mat[0].size();
          int low =0, high =n*m -1;
    while(low <= high){
        int mid =(low +high)/2;
        int row = mid/m;
        int col = mid%m;
        if(mat[row][col] == target) return true;
        else if(mat[row][col] < target) low =mid+1;
        else high = mid -1;
    }
    return false;
}