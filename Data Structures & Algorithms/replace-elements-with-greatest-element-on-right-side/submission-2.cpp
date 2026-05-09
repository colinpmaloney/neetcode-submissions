class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int m = -1;

        vector<int> result(arr.size());
        for(int x = arr.size() - 1; x >= 0; x--){
            result[x] = m;
            m = max(arr[x], m);
        }

        return result;
    }
};