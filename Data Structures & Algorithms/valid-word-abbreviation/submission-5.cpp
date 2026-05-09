class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int wP = 0;    
        int aP = 0;    

        while(wP < word.length()){
            if(aP >= abbr.length()) 
                return false;
            
            if(isalpha(abbr[aP])){
                if(abbr[aP] != word[wP]) return false;
                wP++;
                aP++;
            }
            else{
                if(abbr[aP] == '0')
                    return false;

                int converted = 0;
                string preConvert = "";
                while(isdigit(abbr[aP]) && aP < abbr.length()){
                    preConvert += abbr[aP++];
                }
                converted = stoi(preConvert);
                if(wP + converted > word.length())
                    return false;

                wP += converted;
            }
            cout << wP << ' ' << aP << '\n';
        }

        
        cout << wP << ' ' << aP << '\n';
        return aP == abbr.length();
    }
};