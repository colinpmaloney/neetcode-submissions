class Solution {
public: 
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        result.reserve(nums.size() - k + 1);

        deque<int> indexDeque; // Sorted decreasing value from index
        for(int currentIndex = 0; currentIndex < nums.size(); currentIndex++){
            int currentNumber = nums[currentIndex];

            while(!indexDeque.empty() && indexDeque.front() <= currentIndex - k){
                indexDeque.pop_front();
            }

            while(!indexDeque.empty() && currentNumber > nums[indexDeque.back()]){
                indexDeque.pop_back();
            }
            
            indexDeque.emplace_back(currentIndex);

            if(currentIndex >= k - 1){
                result.emplace_back(nums[indexDeque.front()]);
            }
            
        }

        return result;
    }
};



