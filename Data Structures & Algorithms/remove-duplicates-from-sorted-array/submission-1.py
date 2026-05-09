class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        k = 1
        for index in range(1, len(nums)):
            if nums[index] != nums[k-1]:
                nums[k] = nums[index]
                k += 1
        
        return k

"""
1, 1, 2, 3, 4


"""