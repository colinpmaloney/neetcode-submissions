class Solution:
    def largestUniqueNumber(self, nums: List[int]) -> int:
        count = Counter(nums)
        ones = [key for key, value in count.items() if value == 1]
        largest = max(ones) if ones else -1
        return largest