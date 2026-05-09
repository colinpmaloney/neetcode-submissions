class Solution {
public:

    int rob(vector<int>& nums) {
        vector<int> currentAmt(nums.size());
        int maxOne = INT_MIN;
        int maxTwo = INT_MIN;

        int i = 0;
        while(i < nums.size()){
            if(i < 2){
                currentAmt[i] = nums[i];
            }else{
                currentAmt[i] = nums[i] + maxTwo;
            }

            if(i == 0)
                maxOne = currentAmt[0];
            else{
                maxTwo = maxOne;
                maxOne = max(maxTwo, currentAmt[i]);
            }


            i++;
        }

        for(const auto& x: currentAmt) cout << x << ' ';

        int a = currentAmt.back();
        currentAmt.pop_back();
        int b = currentAmt.back();

        return max(a, b);
    }
};
