void shortest_distance(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // Replace -1 with INT_MAX to represent infinity
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (matrix[i][j] == -1)
                matrix[i][j] = INT_MAX;

    // Floyd-Warshall algorithm
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // Edge case: avoid overflow and skip if there's no path
                if (matrix[i][k] == INT_MAX || matrix[k][j] == INT_MAX)
                    continue;

                // Update the shortest path
                matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
            }
        }
    }

    // Replace INT_MAX back with -1 to denote no path
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (matrix[i][j] == INT_MAX)
                matrix[i][j] = -1;
}

Tc: O(n^3)
Sc: O(1)

// 2nd Approch  with using int max
void shortest_distance(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Floyd-Warshall algorithm
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // Check if there is a path from i to k and k to j
                if (matrix[i][k] != -1 && matrix[k][j] != -1) {
                    if (matrix[i][j] == -1) {
                        // If there is no direct path from i to j, use the path through k
                        matrix[i][j] = matrix[i][k] + matrix[k][j];
                    } else {
                        // If there is a direct path, choose the shorter one
                        matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
                    }
                }
            }
        }
    }
}