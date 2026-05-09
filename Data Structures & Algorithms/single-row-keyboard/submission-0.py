class Solution:
    def calculateTime(self, keyboard: str, word: str) -> int:
        indexCount = 0
        curIndex = 0
        for index in range(len(word)):
            nextIndex = keyboard.index(word[index])
            distance = abs(curIndex - nextIndex)
            indexCount += distance
            curIndex = nextIndex
            print(distance)
        
        return indexCount
            