class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0;
        int r = arr.size() - 1;
        while(1 + r - l > k){
            int leftDistance = abs(arr[l] - x);
            int rightDistance = abs(arr[r] - x);
            if(leftDistance < rightDistance || (leftDistance == rightDistance && (arr[l] < arr[r]))){
                r--;
            }else{
                l++;
            }
            cout << l << ' ' << r << '\n';
        }

        vector<int> result;
        for(int j = l; j < r + 1; j++){
            result.emplace_back(arr[j]);
        }
        return result;
    }
};