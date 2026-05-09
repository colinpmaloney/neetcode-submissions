class Solution:
    def confusingNumber(self, n: int) -> bool:
        flipMap : dict = {
            0 : 0,
            1 : 1,
            6 : 9,
            8 : 8,
            9 : 6,
        }

        nCopy = n
        reverseNum = 0
        while nCopy > 0:
            reverseNum *= 10
            numToFlip = nCopy % 10
            if numToFlip not in flipMap:
                return False
            reverseNum += flipMap[numToFlip]
            nCopy //= 10
        
        return reverseNum != n
        