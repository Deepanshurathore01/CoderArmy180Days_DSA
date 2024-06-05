vector<int> findOrder(int N, int P, vector<vector<int>> prerequisites) 
    {
       
    vector<int> adj[N];
    vector<int> InDeg(N, 0);

    for (int i = 0; i < P; i++) {
        adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        InDeg[prerequisites[i][0]]++;
    }

    queue<int> q;
    for (int i = 0; i < N; i++) {
        if (InDeg[i] == 0) {
            q.push(i);
        }
    }

    vector<int>ans;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        // Look at the neighbors
        for (int neighbor : adj[node]) {
            InDeg[neighbor]--;
            if (InDeg[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }
        if (ans.size() != N) {
        return {};
    }

    return ans;
	
    }