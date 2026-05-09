class Solution:
    def areSentencesSimilar(self, sentence1: List[str], sentence2: List[str], similarPairs: List[List[str]]) -> bool:
        if len(sentence1) != len(sentence2):
            return False
        
        similarMap: dict = defaultdict(list[str])
        for pair in similarPairs:
            similarMap[pair[0]].append(pair[1])
            similarMap[pair[1]].append(pair[0])
    
        for index, word in enumerate(sentence1):
            if word not in similarMap[sentence2[index]]:
                if word != sentence2[index]:
                    return False
        
        return True

            