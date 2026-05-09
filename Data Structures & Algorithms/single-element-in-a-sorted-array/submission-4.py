class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        
        l, r = 0, len(nums) - 1
        cur: int
        while l <= r:
            width = r-l
            cur = l + (r-l) // 2
            # If there is only one number, or the touching numbers don't match
            if width == 0 or nums[cur] not in (nums[cur-1], nums[cur+1]):
                return nums[cur]
            
            # If the index is even
            if cur % 2 == 0:
                # If the left number matches, it's in the left else in the right
                if nums[cur-1] == nums[cur]:
                    r = cur - 1
                else:
                    l = cur + 1
            # If the index is odd
            else:
                # If the left number matches, it's in the right else in the left
                if nums[cur-1] == nums[cur]:
                    l = cur + 1
                else:
                    r = cur - 1
4,2,2