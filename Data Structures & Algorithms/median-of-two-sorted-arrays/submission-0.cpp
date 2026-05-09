class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int one = 0;
        int two = 0;
        int size = nums1.size() + nums2.size();
        vector<int> sortedTotal(size);

        int index = 0;
        while(one < nums1.size() && two < nums2.size()){
            if(nums1[one] < nums2[two]){
                sortedTotal[index++] = nums1[one++];
            }else{
                sortedTotal[index++] = nums2[two++];
            }
        }
        if(index != size){
            if(one != nums1.size()){
                for(; one < nums1.size(); one++){
                    sortedTotal[index++] = nums1[one];
                }
            }else{
                for(; two < nums2.size(); two++){
                    sortedTotal[index++] = nums2[two];
                }
            }
        }

        if(sortedTotal.size() % 2 == 1){
            return sortedTotal[sortedTotal.size()/2];
        }

        return (sortedTotal[sortedTotal.size()/2] + sortedTotal[sortedTotal.size()/2 - 1])/ (double)2;
    }
};

// Step 1 - Combine the two lists into one sorted list
//      Considering no space requirement I will start by creating a new list
//      I will construct the new list by choosing the smaller of the two lists, then incrementing that list