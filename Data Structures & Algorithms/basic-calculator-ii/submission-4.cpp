class Solution {
public:
    int calculate(string s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        stack<int> nums;
        int num = 0;
        char op = '+';

        for(int i = 0; i < s.length(); i++){
            if(isdigit(s[i])){
                num = num * 10 + (s[i] - '0');
            }
            if(!isdigit(s[i]) || i == s.size() - 1){
                if(op == '+'){
                    nums.emplace(num);
                }
                else if(op == '-'){
                    nums.emplace(-num);
                }
                else if(op == '*'){
                    int prev = nums.top(); nums.pop();
                    nums.emplace(prev*num);
                }
                else {
                    int prev = nums.top(); nums.pop();
                    nums.emplace(prev/num);
                }
                op = s[i];
                num = 0;
            }
        }
        int result = 0;
        while(!nums.empty()){
            result += nums.top(); nums.pop();
        }
        return result;
    }
};

// Strip the string
// Add characters to str: strToInt until we hit an operator
// After we hit an operator - store as int on numStack
// store operator on opStack
// Add characters to str: strToInt until we hit an operator
// After we hit an operator or the end - store as int on numStack

// If we hit a * or a /
// Add the next operator to numStack
//      Check if last operator was a * or /
//      If yes then A operator B and add this to numStack
