
 vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    vector<bool> Explore(V, false);
    vector<int> dist(V, INT_MAX);
    dist[S] = 0;

    for (int cnt = 0; cnt < V; cnt++)
    {
        int node = -1, value = INT_MAX;

        // Select a node which is not explored yet and has the minimum distance
        for (int i = 0; i < V; i++)
        {
            if (!Explore[i] && dist[i] < value)
            {
                node = i;
                value = dist[i];
            }
        }

        // If node is -1, it means all remaining nodes are unreachable
        if (node == -1) break;

        Explore[node] = true;

        // Relax the edges of the node
        for (int j = 0; j < adj[node].size(); j++)
        {
            int neighbour = adj[node][j][0];
            int weight = adj[node][j][1];
            if (!Explore[neighbour] && dist[node] + weight < dist[neighbour])
            {
                dist[neighbour] = dist[node] + weight;
            }
        }
    }
    return dist;

    }

    // Tc: O(V^2)
    // Sc: O(V)