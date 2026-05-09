class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        
        l, r = 0, len(nums) - 1
        cur: int
        while l <= r:
            width = r-l
            cur = l + (r-l) // 2
            if width == 0 or nums[cur] not in (nums[cur-1], nums[cur+1]):
                return nums[cur]
            if cur % 2 == 0:
                if nums[cur-1] == nums[cur]:
                    r = cur
                else:
                    l = cur
            else:
                if nums[cur-1] == nums[cur]:
                    l = cur + 1
                else:
                    r = cur
        return -1
"""
2,2,4,4,3


if middle not in middle - 1, middle + 1:
    correct

If the middle index is even
    if middle - 1 == middle
        Single is in left
    else:
        Single is in right
    
If the middle index is odd
    If middle - 1 == middle
        Single is in right
    else:
        Single is in left

[3,3,7,7,10,11,11]
Mid = 7 // 2 = 3

"""