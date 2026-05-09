class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        for(int x = 0; x < size; x++){
            int l = x;
            int r = size-1;
            while(numbers[l]+numbers[r] > target && r > l){
                r--;
            }
            while(numbers[l]+numbers[r] < target && r > l){
                l++;
            }
            if(numbers[l]+numbers[r] == target)
                return{l+1, r+1};
        }
    }
};
