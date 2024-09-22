vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
    vector<vector<int>> ans;  // Result vector to store intersections
    int n = firstList.size(), m = secondList.size();  // Sizes of the two lists
    int i = 0, j = 0;  // Pointers for traversing both lists

    while (i < n && j < m) {
        // Find the intersection between firstList[i] and secondList[j]
        int start = max(firstList[i][0], secondList[j][0]);  // Start of intersection
        int end = min(firstList[i][1], secondList[j][1]);  // End of intersection

        // If the intersection is valid (start <= end), we add it to the result
        if (start <= end) {
            ans.push_back({start, end});
        }

        // Move the pointer that has the smaller end value
        if (firstList[i][1] < secondList[j][1]) {
            i++;
        } else {
            j++;
        }
    }
    
    return ans;  // Return the result
}
// Tc :O(n+m)
// Sc :O(1)
Approach
Use two pointers, one for each list of intervals (firstList, secondList).
For each pair of intervals, find the intersection by taking the maximum of the start times and the minimum of the end times.
If the calculated intersection is valid (i.e., start ≤ end), add it to the result.
Move the pointer that has the smaller end time to process the next interval.
Repeat until you’ve checked all intervals in both lists.