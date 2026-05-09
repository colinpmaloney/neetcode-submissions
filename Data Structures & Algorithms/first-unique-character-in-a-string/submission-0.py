class Solution:
    def firstUniqChar(self, s: str) -> int:
        mapping: dict = defaultdict(int)
        for char in s:
            mapping[char] += 1
        
        for char, count in mapping.items():
            if count == 1:
                return s.index(char)
        
        return -1

"""



"""