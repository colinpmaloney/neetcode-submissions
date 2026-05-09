class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        countRansom = Counter(ransomNote)
        countMagazine = Counter(magazine)

        for char in ransomNote:
            if countRansom[char] > countMagazine[char]:
                return False
        
        return True