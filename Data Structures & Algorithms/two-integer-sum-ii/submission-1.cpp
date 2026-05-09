class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        for(int x = 0; x < numbers.size()-1; x++){
            int compliment = target - numbers[x];
            for(int j = x+1; j < numbers.size(); j++)
            {
                if (numbers[j] == compliment)
                    return {x+1,j+1};
            }
        }

        return {-1,-1};
    }
};
