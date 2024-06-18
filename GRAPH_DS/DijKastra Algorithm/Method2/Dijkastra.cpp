vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    vector<bool> Explore(V, false);
    vector<int> dist(V, INT_MAX);
    dist[S] = 0;
    
    priority_queue<pair<int,int> , vector<pair<int,int>> ,greater<pair<int,int>>>p;
    p.push({0,S});
    
    while(!p.empty())
    {
        int node =p.top().second;
        p.pop();
        
        if(Explore[node] ==1)
        continue;
        
        Explore[node] =1;
        
          // Relax the edges of the node
        for (int j = 0; j < adj[node].size(); j++)
        {
            int neighbour = adj[node][j][0];
            int weight = adj[node][j][1];
            if (!Explore[neighbour] && dist[node] + weight < dist[neighbour])
            {
                dist[neighbour] = dist[node] + weight;
                p.push({dist[neighbour],neighbour});
            }
        }
        
    }  
    
    return dist;

    }