class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        result: set[str] = set()
        words = sorted(words, key=lambda x: len(x))
        print(words)
        for index in range(len(words)):
            for innerIndex in range(index + 1, len(words)):
                print(words[innerIndex], words[index], end=" ")
                if words[innerIndex].find(words[index]) != -1:
                    print('T')
                    result.add(words[index])
                print()

        return list(result)