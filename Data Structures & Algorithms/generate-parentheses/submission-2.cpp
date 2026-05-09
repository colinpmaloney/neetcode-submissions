class Solution {
public:

    void createOne(int n, int open, int closed, string current, vector<string>& result){
        if(current.length() == 2*n) result.emplace_back(current);
        string temp;
        if(open < n){
            // Do Open
            temp = current + "(";
            createOne(n, open + 1, closed, temp, result);
        }
        if(open > closed){
            // Do Close
            temp = current + ")";
            createOne(n, open, closed + 1, temp, result);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string test = "";
        createOne(n, 0, 0, test, result);
        return result;
    }
};
