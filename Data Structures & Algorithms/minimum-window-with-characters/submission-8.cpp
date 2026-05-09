class Solution {
public:
    void p(vector<int>& a, vector<int>& b){
        cout << "Uppercase\n";
        for(int i = 0; i < 26; i++) cout << a[i] << ' ';
        cout << '\n';
        for(int i = 0; i < 26; i++) cout << b[i] << ' ';
        cout << '\n';
        cout << "Lowercase\n";
        for(int i = 32; i < 58; i++) cout << a[i] << ' ';
        cout << '\n';
        for(int i = 32; i < 58; i++) cout << b[i] << ' ';
        cout << '\n';
    }


    string minWindow(string s, string t) {
        if(t.length() > s.length()) return "";
        vector<int> sM(58,  0);
        vector<int> tM(58 , 0);
        int matches = 0;
        string smallest = s + "end";
        string current = "";

        for(int x = 0; x < t.length(); x++){
            int sIndex = s[x] - 'A';
            int tIndex = t[x] - 'A';
            sM[sIndex]++;
            tM[tIndex]++;
            current += s[x];
        }

        for(int x = 0; x < 58; x++){
            if(sM[x] >= tM[x]) matches++;
        }

        p(sM, tM);


        if (matches == 58) return s.substr(0,t.length());
        
        int left = 0;
        cout << "Current: " << current << '\n';
        cout << "Matches: " << matches << '\n';
        for(int x = t.length(); x < s.length(); x++){
            
            // Add the current letter
            current += s[x];
            // Increment the current letters count
            sM[s[x] - 'A']++;
            // If we we've reached the match count, increase matches
            if(sM[s[x] - 'A'] == tM[s[x] -'A']){
                matches++;
            }  
            cout << "Current: " << current << '\n';
            cout << "Matches: " << matches << '\n';

            while(matches == 58){
                cout << "In Loop : " << current << ", " << smallest << "\n";
                if(current.length() < smallest.length()){
                    smallest = current;
                    cout << "New smallest : " << smallest << '\n';
                }else{
                    // cout << sM[s[left] - 'A'] << " : count of " << s[left] << '\n';
                    if(sM[s[left] - 'A'] == tM[s[left] - 'A']){
                        sM[s[left] -'A']--;
                        left++;
                        matches--;
                    }else{
                        sM[s[left] -'A']--;
                        left++;
                    }

                    current = current.substr(1);
                    // cout << "Current Loop: " << current << '\n';
                    // cout << "Matches Loop: " << matches << '\n';
                }
            }

        }
        
        if(smallest == s + "end") return "";
        return smallest;
    }
};
