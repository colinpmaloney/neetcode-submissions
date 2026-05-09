class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        unordered_map<int, int> indexMax;
        int m = INT_MIN;
        for(int x = arr.size() - 1; x > 0; x--){
            m = max(arr[x], m);
            indexMax[x] = m;
        }   

        vector<int> result(arr.size());
        for(int x = 1; x < arr.size(); x++){
            result[x-1] = indexMax[x];
        }

        result[arr.size() -1] = -1;
        return result;
    }
};