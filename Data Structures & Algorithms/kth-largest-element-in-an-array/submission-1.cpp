class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;

        for(int x = 0; x < nums.size(); x++){
            pq.push(nums[x]);
            if(pq.size() > k){
                pq.pop();
            }
        }

        return pq.top();
    }
};
