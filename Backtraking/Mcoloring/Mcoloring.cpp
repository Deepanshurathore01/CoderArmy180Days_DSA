
// Most intutive method 
bool DFS(int node, vector<int>& color, bool graph[101][101], int m, int n) {
    for (int i = 0; i < m; i++) {
        bool isPossible = true;
        // Check if any adjacent node has the same color
        for (int j = 0; j < n; j++) {
            if (graph[node][j] && color[j] == i) {
                isPossible = false;
                break;
            }
        }

        if (isPossible) {
            color[node] = i;
            // Go to adjacent nodes that haven't been colored
            bool allColored = true;
            for (int j = 0; j < n; j++) {
                if (graph[node][j] && color[j] == -1) {
                    if (!DFS(j, color, graph, m, n)) {
                        allColored = false;
                        break;
                    }
                }
            }

            // If all adjacent nodes can be colored
            if (allColored) {
                return true;
            }

            color[node] = -1;  // Reset color and try next color
        }
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int n) {
    vector<int> color(n, -1);
    for (int i = 0; i < n; i++) {
        if (color[i] == -1 && !DFS(i, color, graph, m, n)) {
            return false;
        }
    }
    return true;
}


// 2nd method
bool find(int node,bool graph[101][101],int n,int m,vector<int>&color){
    
    // base codition
    if(node == n)
    return 1;
    // color the node with m color
    for(int i=0;i<m;i++)
    {
        bool isPossible =1;
        // check if adjacent node does'nt have same color
        for(int j=0;j<n;j++)
        {
            if(graph[node][j] && color[j]==i)
            {
                isPossible =0;
                break;
            }
        }
        // we can assign i color to this node 
        
        if(isPossible)
        {
            color[node]=i;
            if(find(node+1,graph,n,m,color))
            return 1;
            color[node] =-1;
        }
    }
    return 0;
}

bool graphColoring(bool graph[101][101], int m, int n) {
    vector<int> color(n, -1);
   return find(0,graph,n,m,color);
   
}