class Solution:

    def getMapping(self, string: str) -> str:
        mapping = [0] * 26
        for char in string:
            mapping[ord(char) - ord('a')] += 1
        # print(string, mapping)
        return tuple(mapping)

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        group: dict[tuple, list[str]] = defaultdict(list)
        for string in strs:
            group[self.getMapping(string)].append(string)
        
        return [grouping for grouping in group.values()]