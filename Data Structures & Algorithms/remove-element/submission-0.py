class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        stackIndexes = []
        for num in range(len(nums)):
            if nums[num] == val:
                stackIndexes.append(num)
        
        while len(stackIndexes):
            nums.pop(stackIndexes[-1])
            stackIndexes.pop()
        
        return len(nums)