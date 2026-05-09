class MinStack {
public:

    vector<pair<int, int>> stack;
    int lowest;

    MinStack() {
        stack = vector<pair<int, int>>();
        lowest = INT_MAX; // MAX int
    }
    
    void push(int val) {
        lowest = min(lowest, val);
        stack.emplace_back(pair{val, lowest});
    }
    
    void pop() {
        stack.pop_back();
        if(stack.size())
            lowest = stack[stack.size() -1].second;
        else
            lowest = INT_MAX;
    }
    
    int top() {
        return stack[stack.size() - 1].first;
    }
    
    int getMin() {
        return lowest;
    }
};
