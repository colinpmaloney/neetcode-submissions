class Solution {
public:

    int operate(int a, int b, char o){
        switch (o){
            case '+':
                return a+b;
            case '-':
                return a-b;
            case '/':
                if(b == 0) return 0;
                return a/b;
            case '*':
                return a*b;
            default:
                return 0;
        }
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> stk;

        for(const auto& t : tokens){
            // If not an opeartor push it on to the stack
            if(!(t == "+" || t == "-" || t =="/" || t == "*")){
                stk.push(stoi(t));
            }else
            // When we reach an operator. Pop them off, do the calc and add it back
            {
                int b = stk.top();
                stk.pop();
                int a = stk.top();
                stk.pop();
                stk.push(operate(a,b,t[0]));
            }
        }

        
        return stk.top();
    }
};
