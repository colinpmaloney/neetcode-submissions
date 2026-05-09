class Solution:
    def calculateTime(self, keyboard: str, word: str) -> int:
        keyBoardMap: dict = {val : index for index, val in enumerate(keyboard)}

        indexCount = 0
        curIndex = 0
        for index in range(len(word)):
            nextIndex = keyBoardMap[word[index]]
            distance = abs(curIndex - nextIndex)
            indexCount += distance
            curIndex = nextIndex
        
        return indexCount
            