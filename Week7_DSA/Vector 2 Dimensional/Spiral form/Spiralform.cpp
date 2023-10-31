#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// tc : o(row * col) sc :- o(1)
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int row = matrix.size(), col = matrix[0].size();
    int top = 0, bottom = row - 1, left = 0, right = col - 1;

    while (top <= bottom && left <= right) {
        // Traverse the top row
        for (int j = left; j <= right; j++) {
            ans.push_back(matrix[top][j]);
        }
        top++;

        // Traverse the rightmost column
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // Check if there are more rows to traverse
        if (top <= bottom) {
            // Traverse the bottom row
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        // Check if there are more columns to traverse
        if (left <= right) {
            // Traverse the leftmost column
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}

