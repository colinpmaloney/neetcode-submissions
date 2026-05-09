// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        vector<vector<Pair>> result;
        if(pairs.size() == 0) return {};
        result.emplace_back(pairs);

        for(int x = 1; x < pairs.size(); x++){
            Pair current = pairs[x];
            Pair prev = pairs[x-1];
            if(current.key < prev.key){
                for(int j = x; j > 0; j--){
                    Pair currentJ = pairs[j];
                    Pair previousJ = pairs[j - 1];
                    if(currentJ.key < previousJ.key)
                        swap(pairs[j], pairs[j-1]);
                    else
                        break;
                }
            }
            result.emplace_back(pairs);
        }

        return result;
    }
};
