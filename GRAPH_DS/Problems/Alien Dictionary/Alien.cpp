string findOrder(string dict[], int N, int K) {
        
        // Adjacency list 
        vector<int> adj[K];

    // Calculate in-degree
    vector<int> InDeg(K, 0);
    for (int i = 0; i < N - 1; i++) {
        string str1 = dict[i], str2 = dict[i + 1];
        int j = 0, k = 0;

        // Find the first non-matching character
        while (j < str1.size() && k < str2.size() && str1[j] == str2[k]) {
            j++;
            k++;
        }

        // If both strings are the same until the end, continue
        if (j == str1.size() || k == str2.size()) {
            continue;
        }

        // Create an edge from str1[j] to str2[k]
        adj[str1[j] - 'a'].push_back(str2[k] - 'a');
        InDeg[str2[k] - 'a']++;
    }

    // Kahn's algorithm for topological sorting
    queue<int> q;
    for (int i = 0; i < K; i++) {
        if (InDeg[i] == 0) {
            q.push(i);
        }
    }

    string ans;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        char c = 'a' + node;
        ans += c;

        // Look at the neighbors
        for (int neighbor : adj[node]) {
            InDeg[neighbor]--;
            if (InDeg[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    return ans;
    }