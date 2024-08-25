
// 1st method
vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,comp);
        int deadline =0;
        for(int i=0;i<n;i++)
        deadline = max(deadline,arr[i].dead);
        
        vector<bool>Task(deadline+1,0);
        vector<int>ans(2,0);
        
        // pic each task one by one
        
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead;j>0;j--)
            {
                if(!Task[j])
                {
                    Task[j] =1;
                    ans[0]++;
                    ans[1] +=arr[i].profit;
                    break;
                }
            }
        }
        return ans;
    } 