class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        res = count = 0
        for num in nums:
            if count == 0:
                res = num
            count += (1 if num == res else -1)
        
        return res

"""

Pick a candidate anytime the current count is 0
If the candidate is seen again
    increment
else
    decrement
    

"""