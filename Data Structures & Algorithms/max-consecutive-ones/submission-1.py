class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        greatest: int = 0
        current: int = 0
        for num in nums:
            current += 1 if num else -current
            greatest = max(greatest, current)
        return greatest