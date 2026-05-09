class Solution {
public:

    int memo(int n, unordered_map<int, int>& m){
        if(m.count(n)) return m[n];

        m[n] = memo(n-1, m) + memo(n-2, m);
        return m[n];
    }

    int climbStairs(int n) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        mp[-1] = 0;
        return memo(n, mp);
    }
};

