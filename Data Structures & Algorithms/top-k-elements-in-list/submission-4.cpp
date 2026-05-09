class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Map the occurences to a vector of numbers with that many occurences
        map<int, vector<int>> um;
        for(const int& x : nums){
            int occurences = count(nums.begin(), nums.end(), x);

            // If the occurence already has stuff added to to it
            if(um.find(occurences) != um.end()){
                if(find(um[occurences].begin(), um[occurences].end(), x) == um[occurences].end())
                    um[occurences].emplace_back(x);
            }else{
                um[occurences].emplace_back(x);
            }
        }

        vector<int> retMe;
        for(auto iter = um.rbegin(); iter != um.rend(); ++iter){
            for(int x : iter->second){
                retMe.emplace_back(x);
                if(retMe.size() == k) return retMe;
            }
        }

        return retMe;
    }
};
