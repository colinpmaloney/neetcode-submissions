class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        runningArr = [0] * len(nums)

        runningTotal = 0
        largestIndex = 0
        largestTotal = -pow(2,31)
        for index in range(len(nums)):
            runningTotal += nums[index]
            runningArr[index] = runningTotal
            if runningTotal > largestTotal:
                largestTotal = runningTotal
                largestIndex = index
                print("Largest:",largestTotal, largestIndex)
        
        smallestIndex = 0
        smallestTotal = min(0, largestTotal)
        for index in range(len(nums)):
            runningTotal = runningArr[index]
            if runningTotal < smallestTotal:
                smallestTotal = runningTotal
                smallestIndex = index
                print("Smallest:",smallestTotal, smallestIndex)
        print(smallestIndex+1, largestIndex+1)

        if smallestIndex >= largestIndex:
            return max(nums)    
        return runningArr[largestIndex] - (runningArr[smallestIndex] if smallestTotal < 0 and smallestIndex != largestIndex else 0)

"""
A running total will find the highest subArray
[2,-3, 4,-2, 2, 1,-1, 4]
[2,-1, 3, 1, 3, 4, 3, 7]

[2, -3, -5, -2, -10, 90]
[2, -1, -6, -8, -18, 72]

[2, -2, -5,  -5, -10, 90, -100, 130]
[2,  0, -5, -10, -20, 70,  -30, 100]
"""