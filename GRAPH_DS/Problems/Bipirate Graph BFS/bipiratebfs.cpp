	bool isBipartite(int V, vector<int>adj[]){
	    vector<int>color(V,-1);
	    queue<int>q;
	    
	    for(int i=0;i<V;i++)
	    {
	        if(color[i]==-1)
	        {
	             q.push(i);
	             color[i] =0;
	    
	    while(!q.empty())
	    {
	        int node =q.front();
	        q.pop();
	        
	        for(int j=0;j<adj[node].size();j++)
	        {
	            // color not assigned to them
	            if(color[adj[node][j]]==-1)
	            {
	                color[adj[node][j]] =(color[node]+1)%2;
	                q.push(adj[node][j]);
	            }
	            
	            //color is already assigned
	            else{
	                if(color[node] == color[adj[node][j]])
	                return 0;
	            }
	        }
	    }
	        }
	    }
	    
	   
	    return 1;
	}

  // Tc : O(V+E)
  // Sc : O(V)