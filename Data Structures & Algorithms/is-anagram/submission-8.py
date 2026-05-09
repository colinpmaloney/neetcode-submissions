from collections import defaultdict

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s) != len(t)):
            return False

        sDict: dict = defaultdict(int)
        tDict: dict = defaultdict(int)

        for x in range(len(s)):
            sDict[s[x]] += 1
            tDict[t[x]] += 1
        
        return sDict == tDict