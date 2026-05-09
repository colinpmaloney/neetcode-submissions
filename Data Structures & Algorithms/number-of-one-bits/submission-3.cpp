class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        for(int x = 0; x < 32; x++){
            if(n & 1)
                count++;
            n >>= 1;
        }
        return count;
    }
};
