https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
vector<string> result;
vector<int> row = {1, 0, 0, -1};
vector<int> col = {0, -1, 1, 0};
string dir = "DLRU";

void dfs(vector<vector<int>> &mat, int n, int i, int j, vector<char> &path) {
    // base case
    if (i == n - 1 && j == n - 1) {
        result.push_back(string(path.begin(), path.end()));
        return;
    }

    for (int k = 0; k < 4; k++) {
        int newRow = i + row[k];
        int newCol = j + col[k];

        if (newRow >= 0 && newCol >= 0 && newRow < n && newCol < n && mat[newRow][newCol] == 1) {
            mat[i][j] = 0; // mark as visited
            path.push_back(dir[k]);

            dfs(mat, n, newRow, newCol, path);

            path.pop_back(); // backtrack
            mat[i][j] = 1; // mark as unvisited
        }
    }
}

vector<string> findPath(vector<vector<int>> &mat) {
    int n = mat.size();
    result.clear(); // clear previous results if any

    if (mat[0][0] == 0 || mat[n - 1][n - 1] == 0) {
        return result;
    }

    vector<char> path;
    dfs(mat, n, 0, 0, path);

    return result;