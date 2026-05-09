class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Initailize map - Each number starts at 0
        unordered_map<int, int> mp;
        for(const auto& n : nums){
            mp[n] = 0;
        }  

        for(const auto& n : nums){
            // If you can't find a precursor to the number then its the start
            // Starting numbers get a 1
            if(mp.find(n-1) == mp.end())
                mp[n] = 1;
        }  

        int best = 0;
        for(const auto& [key, value] : mp){
            // If not the start of a sequence piss off
            if(value != 1) continue;

            // Start count at 0
            int count = 1; 
            // If value == 1 then check if map has key+1 add to count. Go until it doesnt;
            while(mp.find(key+count) != mp.end())
                count++;

            if(count > best) best = count;
        }

        return best;

    }
};
