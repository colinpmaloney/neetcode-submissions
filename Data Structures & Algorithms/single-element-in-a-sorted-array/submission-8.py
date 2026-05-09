class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]

        l, r = 0, len(nums) - 1
        index: int
        while l <= r:
            index = l + (r-l) // 2
            if l == r:
                break

            offset = index
            offset -= 1 if index % 2 == 1 else 0
            if nums[offset] == nums[offset + 1]:
                l = offset + 2
            else:
                r = index - 1
        return nums[index]