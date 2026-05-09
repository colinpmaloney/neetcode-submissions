class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        res = -1e32
        runningSum = 0
        for num in nums:
            runningSum = max(runningSum + num, num)
            res = max(runningSum, res)
        return res