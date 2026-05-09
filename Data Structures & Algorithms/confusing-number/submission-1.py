class Solution:
    def confusingNumber(self, n: int) -> bool:
        flipMap : dict = {
            "0" : "0",
            "1" : "1",
            "6" : "9",
            "8" : "8",
            "9" : "6",
        }

        initialString = str(n)
        reverse = initialString[::-1]
        reverseFlip = ""
        for char in reverse:
            if char in flipMap:
                reverseFlip += flipMap[char]
            else:
                return False
                
        
        print(reverseFlip, initialString)
        return reverseFlip != initialString
        