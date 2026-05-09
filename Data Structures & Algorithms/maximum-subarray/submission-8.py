class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        res = nums[0]
        runningSum = 0
        for num in nums:
            runningSum = max(runningSum + num, num)
            res = max(runningSum, res)
        return res