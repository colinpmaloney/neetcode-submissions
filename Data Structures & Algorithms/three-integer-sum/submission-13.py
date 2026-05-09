class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        preList = set()
        zeroComp = {}
        for index in range(len(nums)):
            comp = nums[index]
            zeroComp[comp] = index
        
        # print(zeroComp)

        for i in range(len(nums) - 2):
            for j in range(i + 1, len(nums)):
                searchFor = -(nums[i] + nums[j])
                if(searchFor in zeroComp.keys() and zeroComp[searchFor] not in (i, j)):
                    preList.add(tuple(sorted([nums[i], nums[j], searchFor])))
        
        return list(list(x) for x in preList)