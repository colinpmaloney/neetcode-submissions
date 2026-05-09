class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        vector<int> pre;
        vector<int> post;

        int preTotal = 1;
        for(int x = 0; x < nums.size(); x++){
            preTotal *= nums[x];
            pre.emplace_back(preTotal);
        }

        int postTotal = 1;
        for(int x = nums.size() -1; x >= 0; x--){
            postTotal *= nums[x];
            post.emplace_back(postTotal);
        }
        
        for(int x = 0; x < nums.size(); x++){
            // First iteration returns post[1];
            if( x == 0 ) result.emplace_back(post[nums.size() - 2]);
            // Last iteration returns pre[nums.size() - 2]
            else if ( x == (nums.size() - 1)) result.emplace_back(pre[nums.size() - 2]);
            // Middle iterations do pre [x - 1] * post[x+1]
            else result.emplace_back(pre[x-1] * post[nums.size() - 2 - x]);
        }

        return result;
        
    }
};
