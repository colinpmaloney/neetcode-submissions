class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> retMe;
        retMe.reserve(n);
        for(int x = 0; x <= n; x++){  

            int tempX = x;
            int count = 0;

            while(tempX!=0){
                count += (tempX&1) ? 1 : 0;
                tempX >>= 1;
            }

            retMe.emplace_back(count);
            }

            return retMe;
        }

};
