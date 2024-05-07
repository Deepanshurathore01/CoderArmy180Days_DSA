public:
    priority_queue<int>leftMaxheap;
    priority_queue<int, vector<int>, greater<int>> rightMinheap;
    
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(leftMaxheap.empty())
        {
            leftMaxheap.push(x);
            return;
        }
        
        if(x >leftMaxheap.top())
        rightMinheap.push(x);
        else
        leftMaxheap.push(x);
        
        balanceHeaps();
        
        
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        if(rightMinheap.size() > leftMaxheap.size())
        {
            leftMaxheap.push(rightMinheap.top());
            rightMinheap.pop();
        }
        else
        {
            // diff btw left-right should no be greater then one 
            if(rightMinheap.size() < leftMaxheap.size()-1){
                rightMinheap.push(leftMaxheap.top());
                leftMaxheap.pop();
            }
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        // left size > right
        if(leftMaxheap.size() >rightMinheap.size())
        return leftMaxheap.top();
        else
        {
            double ans =leftMaxheap.top() +rightMinheap.top();
            ans /=2;
            return ans;
        }
    }