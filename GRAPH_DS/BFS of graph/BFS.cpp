vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        queue<int>q;
        vector<bool>visited(V,0);
        q.push(0);
        visited[0] =1;
        vector<int>ans;
        int node ;
        
        while(!q.empty())
        {
            node =q.front();
            q.pop();
            ans.push_back(node);
            
            for(int j=0;j<adj[node].size();j++)
            {
                if(!visited[adj[node][j]])
                {
                    visited[adj[node][j]] =1;
                    q.push(adj[node][j]);
                }
            }
        }
        return ans;
    }

    // Tc: O(V+E)
    // Sc : O(V)