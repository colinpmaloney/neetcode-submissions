class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        windowSet: set = set()
        for r in range(len(nums)):
            if r > k:
                windowSet.remove(nums[r-k-1])

            if nums[r] in windowSet:
                return True

            windowSet.add(nums[r])
        return False