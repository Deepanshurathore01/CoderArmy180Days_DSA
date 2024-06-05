bool isPossible(int N, int P, vector<pair<int, int>>& prerequisites) {
    vector<int> adj[N];
    vector<int> InDeg(N, 0);

    for (int i = 0; i < P; i++) {
        adj[prerequisites[i].second].push_back(prerequisites[i].first);
        InDeg[prerequisites[i].first]++;
    }

    queue<int> q;
    for (int i = 0; i < N; i++) {
        if (InDeg[i] == 0) {
            q.push(i);
        }
    }

    int cnt = 0;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cnt++;

        // Look at the neighbors
        for (int neighbor : adj[node]) {
            InDeg[neighbor]--;
            if (InDeg[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    return cnt == N;
	}