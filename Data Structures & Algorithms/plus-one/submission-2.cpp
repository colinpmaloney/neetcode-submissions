class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();

        for(int x = size - 1; x >= 0; x--){
            cout << x << ' ' << digits[x] << '\n';
            if(digits[x] == 9){
                if(x == (size - 1)){
                    digits[x] = 0;
                }
                if(x == 0)
                {
                    digits[x] = 1;
                    digits.emplace_back(0);
                }
                else
                    digits[x] = 0;
            }else{
                digits[x] += 1;
                break;
            }
            cout << x << ' ' << digits[x] << "\n\n";
        }

        return digits;
    }
};
