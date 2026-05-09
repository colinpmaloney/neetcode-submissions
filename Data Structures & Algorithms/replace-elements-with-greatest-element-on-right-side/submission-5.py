class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        best = -1
        ret: list = [-1]
        for num in arr[1:][::-1]:
            if num > best:
                best = num
            ret.append(best)
        
        return ret[::-1]