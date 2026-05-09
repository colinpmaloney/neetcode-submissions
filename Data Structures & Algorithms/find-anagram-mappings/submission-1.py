class Solution:
    def anagramMappings(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums2Map: dict = {item : index for index, item in enumerate(nums2)}
        return [nums2Map[key] for key in nums1]