class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        compliment: dict[int] = {}

        for i, num in enumerate(nums):
            comp = target - num
            print(num, comp, compliment)
            if comp in compliment:
                return [compliment[comp], i]
            compliment[num] = i
        