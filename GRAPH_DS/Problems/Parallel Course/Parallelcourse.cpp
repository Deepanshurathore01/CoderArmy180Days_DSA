int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        // create an adjcency list
        vector<int>adj[n];
        for(int i=0;i<relations.size();i++)
        {
            //convert them into 1 based indexing
            adj[relations[i][0]-1].push_back(relations[i][1]-1);
        }
        vector<int>InDeg(n,0);
        for(int i=0;i<n;i++)
        for(int j=0;j<adj[i].size();j++)
        InDeg[adj[i][j]]++;

        queue<int>q;
        for(int i=0;i<n;i++)
        if(!InDeg[i])
        q.push(i);

        // maximum time to caluclate prvious course
        vector<int>CourseTime(n,0);

        while(!q.empty())
        {
            int node =q.front();
            q.pop();

            for(int i=0;i<adj[node].size();i++)
            {
                InDeg[adj[node][i]]--;
                if(!InDeg[adj[node][i]])
                q.push(adj[node][i]);

                // maximum time to complete previous course + present course time 
                CourseTime[adj[node][i]] =max(CourseTime[adj[node][i]],CourseTime[node]+time[node]);
            }
        }

        int ans =0;
        for(int i=0;i<n;i++)
        {
            ans =max(ans,CourseTime[i]+time[i]);
        }
return ans;
    }