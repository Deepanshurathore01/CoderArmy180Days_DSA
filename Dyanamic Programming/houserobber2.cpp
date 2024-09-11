  int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return nums[0];

        if(n==2)
        return max(nums[0],nums[1]);

        int curr1 ,prev=max(nums[0],nums[1]),prev2=nums[0];
        curr1=prev;
    for(int i=2;i<n-1;i++)
    {
        curr1 =max(nums[i]+prev2,prev);
        prev2=prev;
        prev=curr1;
    }

        int curr2;
        prev=max(nums[1],nums[2]),prev2=nums[1];
        curr2=prev;
    for(int i=3;i<n;i++)
    {
        curr2 =max(nums[i]+prev2,prev);
        prev2=prev;
        prev=curr2;
    }

   return max(curr1,curr2);
    }

    // tc: o(n)
    // sc: O(1)