class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(const auto& c : s){
            if(c == '(' || c == '{' || c == '[')
                stk.push(c);

            // Popping stuff to check
            else if (c == ')')
            {
                if(stk.empty() || stk.top() != '(') 
                    return false;
                else stk.pop();
            }
            else if (c == ']')
            {
                if(stk.empty() || stk.top() != '[') 
                    return false;
                else stk.pop();
            }
            else if (c == '}')
            {
                if(stk.empty() || stk.top() != '{') 
                    return false;
                else stk.pop();
            }
        }
        return stk.empty();
    }
};
