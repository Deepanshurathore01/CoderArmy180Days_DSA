class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {
        // Step 1: Create a min-heap of size k using the first k elements of nums
        std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap(nums.begin(), nums.begin() + k);
        
        // Step 2: Iterate through the remaining elements in nums
        for (int i = k; i < nums.size(); i++) {
            // Step 3: If the current element is larger than the smallest element in the min-heap,
            //         replace the smallest element in the heap with the current element
            if (nums[i] > min_heap.top()) {
                min_heap.pop();        // Remove the smallest element
                min_heap.push(nums[i]); // Add the current element
            }
        }
        
        // Step 4: The top of the min-heap now contains the kth largest element in the array
        return min_heap.top();
    }
};
