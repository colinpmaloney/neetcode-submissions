class Solution {
public:

    int rob(vector<int>& nums) {
        vector<int> currentAmt(nums.size());
        unordered_map<int, int> mx;

        int i = 0;
        while(i < nums.size()){
            if(i < 2){
                currentAmt[i] = nums[i];
            }else{
                currentAmt[i] = nums[i] + mx[i-2];
            }

            if(i == 0)
                mx[i] = currentAmt[i];
            else
                mx[i] = max(currentAmt[i], mx[i-1]);

            i++;
        }

        for(const auto& x: currentAmt) cout << x << ' ';

        int a = currentAmt.back();
        currentAmt.pop_back();
        int b = currentAmt.back();

        return max(a, b);
    }
};
