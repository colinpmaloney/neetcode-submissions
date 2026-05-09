class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        windowMap: dict = defaultdict(int)
        l = 0
        for r in range(len(nums)):
            width = abs(r-l)
            if width > k:
                windowMap[nums[l]] -= 1
                l += 1

            if windowMap[nums[r]] >= 1:
                return True

            windowMap[nums[r]] += 1

        return False