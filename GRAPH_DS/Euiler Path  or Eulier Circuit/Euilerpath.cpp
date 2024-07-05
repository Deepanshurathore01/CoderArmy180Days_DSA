void DFS(int node, vector<int> adj[], vector<bool>& visited) {
    visited[node] = true;
    
    for (int j = 0; j < adj[node].size(); j++) {
        if (!visited[adj[node][j]])
            DFS(adj[node][j], adj, visited);
    }
}
	int isEulerCircuit(int V, vector<int>adj[]){
	    
	   // Eular circuit : 2
	   //Calculate the degree of each node 
	   //all node should have even degree 
	   //all non zero degree node should be connected
	   
	   //Euler path :1
	   //claculate the Degree of each node
	   //zero or two node can have odd degree and remaining have even degree 
	   //All non-zero degree node should be connected 
	    vector<int> Deg(V, 0);
    int oddDeg = 0; // number of nodes having odd degree 

    for (int i = 0; i < V; i++) {
        Deg[i] = adj[i].size();
        if (Deg[i] % 2 != 0)
            oddDeg++;
    }

    if (oddDeg != 2 && oddDeg != 0) // neither Eulerian Path nor Eulerian Circuit
        return 0;

    vector<bool> visited(V, false);

    for (int i = 0; i < V; i++) {
        if (Deg[i] > 0) {
            DFS(i, adj, visited);
            break;
        }
    }

    // if any non-zero degree node is still not visited, return 0
    for (int i = 0; i < V; i++) {
        if (Deg[i] > 0 && !visited[i])
            return 0;
    }

    // Eulerian Circuit: return 2, Eulerian Path: return 1
    if (oddDeg == 0)
        return 2;
    else
        return 1;
	   
	}

  