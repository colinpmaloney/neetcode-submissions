class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ransomMap: dict = defaultdict(int)
        magazineMap: dict = defaultdict(int)
        for char in magazine:
            magazineMap[char] += 1
        for char in ransomNote:
            ransomMap[char] += 1

        for char in ransomNote:
            if ransomMap[char] > magazineMap[char]:
                return False
        
        return True