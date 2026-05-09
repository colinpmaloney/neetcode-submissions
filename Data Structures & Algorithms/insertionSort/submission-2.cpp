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

        for(int x = 0; x < pairs.size(); x++){
            for(int j = x - 1; j >= 0; j--){
                Pair currentJ = pairs[j + 1];
                Pair previousJ = pairs[j];
                if(currentJ.key < previousJ.key)
                    swap(pairs[j + 1], pairs[j]);
                else
                    break;
            }
            result.emplace_back(pairs);
        }

        return result;
    }
};
