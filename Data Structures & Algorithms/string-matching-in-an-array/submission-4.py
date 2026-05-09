class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        result: List[str] = []
        words = sorted(words, key=len)
        for index in range(len(words)):
            for innerIndex in range(index + 1, len(words)):
                if words[innerIndex].find(words[index]) != -1:
                    result.append(words[index])
                    break

        return result