class Solution:
    def firstUniqChar(self, s: str) -> int:
        mapping: dict = defaultdict(int)
        for char in s:
            mapping[char] += 1
        
        for index, mapped in enumerate(s):
            if mapping[mapped] == 1:
                return index
        
        return -1