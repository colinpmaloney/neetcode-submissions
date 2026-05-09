class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        greatest: int = 0
        current: int = 0
        for num in nums:
            if num == 1:
                current += 1
            else:
                current = 0
            greatest = max(greatest, current)
        return greatest