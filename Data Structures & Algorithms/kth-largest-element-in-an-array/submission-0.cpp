class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());

        int result;
        for(int x = 0; x < k; x++){
            result = pq.top();
            pq.pop();
        }

        return result;
    }
};
