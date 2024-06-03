#include <vector>
#include <queue>

using namespace std;

int r;
int c;
int row[4] ={1,-1,0,0};
int col[4] ={0,0,1,-1};

bool valid(int i,int j) {
    return i>=0 && i<r && j>=0 && j<c;
}

vector<vector<char>> fill(int n, int m, vector<vector<char>> mat) {
    r = n;
    c = m;
    
    // Apply BFS traversal from borders and replace 'O' with 'T'
    queue<pair<int, int>> q;

    // First and last row
    for(int j = 0; j < c; j++) {
        if(mat[0][j] == 'O') {
            q.push(make_pair(0, j));
            mat[0][j] = 'T';
        }
        if(mat[r-1][j] == 'O') {
            q.push(make_pair(r-1, j));
            mat[r-1][j] = 'T';
        }
    }

    // First and last column
    for(int i = 0; i < r; i++) {
        if(mat[i][0] == 'O') {
            q.push(make_pair(i, 0));
            mat[i][0] = 'T';
        }
        if(mat[i][c-1] == 'O') {
            q.push(make_pair(i, c-1));
            mat[i][c-1] = 'T';
        }
    }

    // BFS to replace 'O' connected to the border 'O's with 'T'
    while(!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();

        for(int k = 0; k < 4; k++) {
            int new_i = i + row[k];
            int new_j = j + col[k];
            if(valid(new_i, new_j) && mat[new_i][new_j] == 'O') {
                mat[new_i][new_j] = 'T';
                q.push(make_pair(new_i, new_j));
            }
        }
    }

    // Replace all 'O' with 'X' and all 'T' with 'O'
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(mat[i][j] == 'O') {
                mat[i][j] = 'X';
            } else if(mat[i][j] == 'T') {
                mat[i][j] = 'O';
            }
        }
    }

    return mat;
}
