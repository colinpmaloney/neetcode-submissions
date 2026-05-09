from collections import defaultdict
class Solution:

    def getMapping(self, string: str) -> str:
        return ''.join(sorted(string))

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        group: dict[dict, list[str]] = defaultdict(list)
        for string in strs:
            # print(self.getMapping(string))
            group[self.getMapping(string)].append(string)
        
        return [grouping for grouping in group.values()]