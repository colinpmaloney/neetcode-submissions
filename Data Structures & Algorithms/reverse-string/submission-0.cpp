class Solution {
public:
    void reverseString(vector<char>& s) {
       int left = 0; 
       int right = s.size() - 1;
       for(int x = 0; x < s.size() / 2; x++){
            swap(s[left++], s[right--]);
       }
       
    }
};