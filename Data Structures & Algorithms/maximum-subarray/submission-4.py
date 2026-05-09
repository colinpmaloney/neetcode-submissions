class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        runningSum = 0
        startIndex = 0
        bestStartIndex = 0
        endIndex = 0
        largestSum = 0
        smallestSum = 0
        for i, num in enumerate(nums):
            runningSum += num
            if runningSum > largestSum:
                endIndex = i + 1
                largestSum = runningSum
                bestStartIndex = startIndex
            if runningSum < smallestSum:
                runningSum = 0
                startIndex = i + 1
                smallestSum = runningSum
        
        print(startIndex, endIndex)
        if startIndex > endIndex:
            return max(nums)
        return sum(nums[startIndex:endIndex])

"""
A running total will find the highest subArray
[2,-3, 4,-2, 2, 1,-1, 4]
[2,-1, 3, 1, 3, 4, 3, 7]

[2, -3, -5, -2, -10, 90]
[2, -1, -6, -8, -18, 72]

[2, -2, -5,  -5, -10, 90, -100, 130]
[2,  0, -5, -10, -20, 70,  -30, 100]
"""