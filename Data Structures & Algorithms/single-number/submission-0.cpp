class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> map;
        for(auto x : nums) map[x]++;
        for(auto& it : map)
        {
            if(it.second == 1){
                return it.first;
            }
        }
    }
};
