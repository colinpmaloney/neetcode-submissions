class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        increasing: bool = None
        for index in range(len(nums) - 1):
            if nums[index] == nums[index+1]:
                continue
            if nums[index] < nums[index+1]:
                if increasing == False:
                    return False
                increasing = True
            else:
                if increasing == True:
                    return False
                increasing = False
        
        return True
