vector<int> getOrder(vector<vector<int>>& tasks) {
    vector<int> ans;
    int n = tasks.size();

    // Add the index of each task to its data for tracking the original order
    for(int i = 0; i < n; i++)
        tasks[i].push_back(i);

    // Sort tasks based on the enqueue time
    sort(tasks.begin(), tasks.end());

    long long timer = 0;  // Use long long to prevent overflow
    int i = 0;

    // Min-heap to select the next task based on processing time, and then by index
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    while(!pq.empty() || i < n) {
        // Push all tasks that are available at the current time into the priority queue
        while (i < n && timer >= tasks[i][0]) {
            pq.push({tasks[i][1], tasks[i][2]});
            i++;
        }

        // If the priority queue is empty, move the timer to the next task's start time
        if (pq.empty()) {
            timer = tasks[i][0];
        } else {
            // Process the next task
            auto [process_time, index] = pq.top();
            pq.pop();
            ans.push_back(index);
            timer += process_time;
        }
    }

    return ans;
}
