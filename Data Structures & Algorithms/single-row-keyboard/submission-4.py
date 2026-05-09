class Solution:
    def calculateTime(self, keyboard: str, word: str) -> int:
        keyBoardMap: dict = {val : index for index, val in enumerate(keyboard)}

        result = 0
        curIndex = 0
        for letter in word:
            result += abs(curIndex - keyBoardMap[letter])
            curIndex = keyBoardMap[letter]
        
        return result
            