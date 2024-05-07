 vector<int> smallestRange(vector<vector<int>>& nums) {
// min heap
//value , row ,col

priority_queue<pair<int,pair<int,int>> ,vector<pair<int,pair<int,int>>> ,greater<pair<int,pair<int,int>>>> p;
int minimum  ,maximum=INT_MIN;
// insert first element of each row into heap
for(int i=0;i<nums.size();i++)
{
  p.push(make_pair(nums[i][0],make_pair(i,0)));
  maximum =max(maximum,nums[i][0]);
}

minimum =p.top().first;
vector<int>ans(2);
ans[0] =minimum;
ans[1] =maximum;
pair<int,pair<int,int>>temp;
int row ,col ,elem;

while(p.size() == nums.size()){
  temp =p.top();
  p.pop();

  elem =temp.first;
  row=temp.second.first;
  col=temp.second.second;

  if(col+1 < nums[row].size())
  {
    col++;
    p.push(make_pair(nums[row][col],make_pair(row,col)));
    maximum =max(maximum,nums[row][col]);
    minimum =p.top().first;

    // if i have got smallest range
    if(maximum - minimum <ans[1]-ans[0])
    {
        ans[0] =minimum;
        ans[1] =maximum;
    }
  }
}
     return ans;   
    }