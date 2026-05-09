class KthLargest {
public:
    int k;
    vector<int> nums;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        this->nums = nums;
    }
    
    int add(int val) {
        nums.emplace_back(val);    

        vector<int> clone = nums;
        make_heap(clone.begin(), clone.end());

        int res;
        for(int x = 0; x < k; x++){
            pop_heap(clone.begin(), clone.end());
            res = clone.back();
            clone.pop_back();
        }
        return res;
    }
};
