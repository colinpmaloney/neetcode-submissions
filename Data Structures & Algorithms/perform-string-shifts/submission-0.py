class Solution:
    def stringShift(self, s: str, shift: List[List[int]]) -> str:
        length = len(s)
        startIndex = 0
        for shiftPair in shift:
            startIndex += shiftPair[1] if shiftPair[0] == 0 else -shiftPair[1]
            startIndex %= length
        
        return s[startIndex:] + s[:startIndex]
            
