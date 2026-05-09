class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        mapS: dict = defaultdict(str)
        mapT: dict = defaultdict(str)

        for index, sChar in enumerate(s):
            if sChar in mapS:
                if mapS[sChar] != t[index]:
                    return False
            elif t[index] in mapT:
                return False
            mapS[sChar] = t[index]
            mapT[t[index]] = sChar
        
        return True