class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1){
            make_heap(stones.begin(), stones.end());
            pop_heap(stones.begin(), stones.end());
            int x = stones.back();
            stones.pop_back();
            make_heap(stones.begin(), stones.end());
            pop_heap(stones.begin(), stones.end());
            int y = stones.back();
            stones.pop_back();
            if(x - y == 0) continue;
            else{
                stones.emplace_back(x-y);
            }
        }    

        if (stones.size()) return stones.front();
        return 0;
    }
};
