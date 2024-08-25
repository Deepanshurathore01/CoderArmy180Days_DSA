  vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
       vector<vector<int>>ans;
       int i=0 , n = intervals.size();

       while(i<n&& newInterval[0] >intervals[i][1])
       {
        ans.push_back(intervals[i]);
        i++;
       }

       if(i == n)
       {
        ans.push_back(newInterval);
        return ans;
       }

       while(i<n && newInterval[1] >= intervals[i][0])
       {
        newInterval[0]=min(newInterval[0],intervals[i][0]);
        newInterval[1]=max(newInterval[1],intervals[i][1]);
        i++;
       }
       ans.push_back(newInterval);

       while(i<n)
       {
        ans.push_back(intervals[i]);
        i++;
       }
       return ans;
    }
