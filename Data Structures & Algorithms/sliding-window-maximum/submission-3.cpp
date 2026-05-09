class Solution {
public: 
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;

        deque<int> sizeIndex; // Sorted decreasing value from index
        for(int currentIndex = 0; currentIndex < nums.size(); currentIndex++){
            int currentNumber = nums[currentIndex];

            while(!sizeIndex.empty() && sizeIndex.front() <= currentIndex - k){
                sizeIndex.pop_front();
            }

            while(!sizeIndex.empty() && currentNumber > nums[sizeIndex.back()]){
                sizeIndex.pop_back();
            }
            
            while(!sizeIndex.empty() && currentNumber > nums[sizeIndex.front()]){
                sizeIndex.pop_front();
            }

            sizeIndex.emplace_back(currentIndex);

            if(currentIndex >= k - 1){
                result.emplace_back(nums[sizeIndex.front()]);
            }
            
        }

        return result;
    }
};



