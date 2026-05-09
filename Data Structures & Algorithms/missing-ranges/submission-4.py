class Solution:
    def findMissingRanges(self, nums: List[int], lower: int, upper: int) -> List[List[int]]:
        if not nums:
            return [[lower, upper]]
        
        missingRanges: list[list[int]] = []
        n = len(nums)
        for index in range(n):
            if index == 0:
                if nums[index] != lower:
                    missingRanges.append([lower, nums[index]-1])
            if index + 1 < n and nums[index] + 1 != nums[index+1]:
                newLow = nums[index] + 1
                newHigh = nums[index+1] - 1
                missingRanges.append([newLow, newHigh])


        if nums[-1] != upper:
            missingRanges.append([nums[-1]+1, upper])

        return missingRanges