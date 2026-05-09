class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> bucket(nums.size());
        for(auto& b : bucket){
            b = 1;
        }

        // X the number we are multiplying the buckets with
        for(int x = 0; x < nums.size(); x++){
            // Y is the bucket
            for(int y = 0; y < bucket.size(); y++){
                if( x == y){
                    continue;
                }
                bucket[y] *= nums[x];
            }
        }

        return bucket;

    }
};
