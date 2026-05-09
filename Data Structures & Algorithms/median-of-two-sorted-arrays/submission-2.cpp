class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int one = 0;
        int two = 0;
        int size = nums1.size() + nums2.size();
        vector<int> sortedTotal(size);

        int index = 0;
        for(; index < (size / 2 + 1); index++){
            if(two >= nums2.size() || (one < nums1.size() && nums1[one] < nums2[two])){
                sortedTotal[index] = nums1[one++];
            }else{
                sortedTotal[index] = nums2[two++];
            }
        }
        index--;

        if(sortedTotal.size() % 2 == 1){
            return sortedTotal[index];
        }

        return (sortedTotal[index] + sortedTotal[index-1])/ (double)2;
    }
};