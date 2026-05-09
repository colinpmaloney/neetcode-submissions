class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        res = -1e32
        runningSum = 0
        for num in nums:
            runningSum += num
            res = max(runningSum, res)
            if runningSum < 0:
                runningSum = 0
        return res