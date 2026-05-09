class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        int sum = n;

        while(sum != 1){
            if(seen.find(sum) != seen.end()) return false;
            seen.emplace(sum);
            
            string currentString = to_string(sum);
            int tempSum = 0;
            for(int x = 0; x < currentString.length(); x++){
                int currentChar = currentString[x] - '0';
                tempSum += currentChar * currentChar;
            }

            sum = tempSum;
        }

        return true;
    }
};
