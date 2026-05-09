class Solution {
public:

    void algo(vector<int>& candidates, set<vector<int>>& result, vector<int> current, int i, int cur, int target){
        if(cur == target){
            result.emplace(current);
            return;
        }
        if(cur > target || i >= candidates.size()){
            return;
        }

        current.emplace_back(candidates[i]);
        cur += candidates[i];
        algo(candidates, result, current, i + 1, cur, target);

        current.pop_back();
        cur -= candidates[i];

        while((i + 1) < candidates.size() && candidates[i] == candidates[i+1]){
            i++;
        }
        algo(candidates, result, current, i + 1, cur, target);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> results;
        sort(candidates.begin(), candidates.end());
        algo(candidates, results, {}, 0, 0, target);


        return vector(results.begin(), results.end());
    }
};
