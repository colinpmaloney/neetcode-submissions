class Solution {
public:

    void algo(vector<vector<int>>& res, vector<int> current, int i, int n, int k){
        if(current.size() == k){
            res.emplace_back(current);
            return;
        }

        if(i > n)
            return;

        current.emplace_back(i);
        algo(res, current, i + 1, n, k);
        current.pop_back();
        algo(res, current, i + 1, n, k);

    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        algo(res, {}, 1, n , k);

        return res;
    }
};