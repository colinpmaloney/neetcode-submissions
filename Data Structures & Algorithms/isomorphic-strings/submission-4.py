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

"""

For each character in s
    we will map that sChar to a character in t

If the character we have mapped does not match the current tChar 
    then that is a fail
If the character we are mapping too already has a mapping 
    that is also a fail

"""