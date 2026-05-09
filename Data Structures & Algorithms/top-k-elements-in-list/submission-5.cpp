class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> nm;
        // Maps current number to an occurence count
        for(const auto& x : nums){
            nm[x]++;
        }

        // This maps the occurence count to all the numbers with that occurence count
        vector<vector<int>> nv(nums.size() + 1);
        for(auto iter = nm.begin(); iter != nm.end(); ++iter){
            // iter->first = the current number
            int num = iter->first;
            // iter->second = the occurence count
            int occurences = iter->second;
            nv[occurences].emplace_back(num);
        }

        vector<int> result;
        for(auto x = nv.rbegin(); x != nv.rend(); ++x){
            if(result.size() == k) return result;
            for(auto j : *x){
                result.emplace_back(j);
            }
        }

        return result;
    }
};
