class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        int total = 0;

        for(const auto& t : tokens){
            // If the token is an operator pop two off the stack and compute
            if(t == "+" || t == "*" || t == "/" || t == "-"){
                int b = stk.top();
                stk.pop();
                int a = stk.top();
                stk.pop();
                
                switch (t[0]){
                    case '+':
                        stk.push(a+b);
                        break;
                    case '-':
                        stk.push(a-b);
                        break;
                    case '/':
                        stk.push(a/b);
                        break;
                    case '*':
                        stk.push(a*b);
                        break;
                    default:
                        stk.push(0);
                        break;
                }

            }else
            {
                stk.push(stoi(t));
            }
        }

        return stk.top();
    }
};
