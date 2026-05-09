class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> result(arr.size());
        for(int x = 0; x < arr.size(); x++){
            int m = INT_MIN;
            for(int j = x + 1; j < arr.size(); j++){
                m = max(arr[j], m);
            }
            result[x] = m;
        }

        result[arr.size()-1] = -1;
        return result;
    }
};