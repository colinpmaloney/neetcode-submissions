class Solution {
public:

    int rob(vector<int>& nums) {
        vector<int> currentAmt(nums.size());

        int i = 0;
        while(i < nums.size()){
            if(i < 2){
                currentAmt[i] = nums[i];
            }else{
                int m = -1;
                for(int x = 0; x < i - 1; x++){
                    m = max(m, currentAmt[x]); 
                } 
                currentAmt[i] = nums[i] + m;
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
