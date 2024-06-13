void DFS(int node, vector<vector<pair<int, int>>>& adj, stack<int>& s1, vector<bool>& visited) {
    visited[node] = true;
    
    for (auto& neighbour : adj[node]) {
        if (!visited[neighbour.first]) {
            DFS(neighbour.first, adj, s1, visited);
        }
    }
    
    s1.push(node);
}

vector<int> shortestPath(int N, int M, vector<vector<int>>& edges) {
    // Create the adjacency list
    vector<vector<pair<int, int>>> adj(N);
    
    for (int i = 0; i < M; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        int weight = edges[i][2];
        
        adj[u].push_back({v, weight});
    }
    
    // Topological sort
    stack<int> s1;
    vector<bool> visited(N, false);
    
    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            DFS(i, adj, s1, visited);
        }
    }
    
    // Initialize distances to all vertices as infinite and distance to source as 0
    vector<int> dist(N, INT_MAX);
    dist[0] = 0;
    
    // Process vertices in topological order
    while (!s1.empty()) {
        int node = s1.top();
        s1.pop();
        
        if (dist[node] != INT_MAX) {
            for (auto& neighbour : adj[node]) {
                int v = neighbour.first;
                int weight = neighbour.second;
                if (dist[node] + weight < dist[v]) {
                    dist[v] = dist[node] + weight;
                }
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        if (dist[i] == INT_MAX) {
            dist[i] = -1;
        }
    }
    
    return dist;