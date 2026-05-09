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
            int j = x - 1;
            while(j >= 0 && pairs[j].key > pairs[j+1].key){
                swap(pairs[j + 1], pairs[j]);
                j--;
            }
            result.emplace_back(pairs);
        }

        return result;
    }
};
