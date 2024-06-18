vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        
        vector<int>dist(V,1e8);
        // 1e8 means 10 ki power 8
        dist[S] =0;
        int e=edges.size();
        
        for(int i=0;i<V-1;i++)
        {
            // relax all the edges 
            bool flag =0;
            for(int j=0;j<e;j++)
            {
                int u =edges[j][0];
                int v =edges[j][1];
                int wt=edges[j][2];
                
                if(dist[u] == 1e8)
                continue;
                
                if(dist[u]+wt < dist[v])
                {
                    dist[v] =dist[u]+wt;
                    flag =1;
                }
            }
            if(!flag)
            return dist;
        }
        
        // to check the cycle 
        
         for(int j=0;j<e;j++)
            {
                int u =edges[j][0];
                int v =edges[j][1];
                int wt=edges[j][2];
                
                 if(dist[u] == 1e8)
                 continue;
                
                if(dist[u]+wt < dist[v])
                {
                    // cycle detected 
                    vector<int>a;
                    a.push_back(-1);
                    return a;
                    
                }
            }
        
        return dist;
    }

    // Tc : O(V*E) in wrost case 
    // Tc : O(E) in best case 
    // Sc : O(V)

