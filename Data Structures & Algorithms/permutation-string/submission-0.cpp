class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.length();
        sort(s1.begin(), s1.end());

        string current = "";
        for(int x = 0; x < s2.length(); x++){
            current += s2[x];
            if(current.length() > k){
                current.erase(0,1);
            }
            string temp = current;
            sort(temp.begin(), temp.end());
            if(temp == s1)
                return true; 
        }

        return false;
    }
};
