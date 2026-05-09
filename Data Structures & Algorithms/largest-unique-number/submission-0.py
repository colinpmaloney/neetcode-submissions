class Solution:
    def largestUniqueNumber(self, nums: List[int]) -> int:
        count = Counter(nums)
        ones = list(filter(lambda item: count[item] == 1, count))
        largest = max(ones) if ones else -1
        return largest