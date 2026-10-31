class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        l, r = 0, 0
        len_t = len(t)
        len_s = len(s)

        while l < len_s:
            if r >= len_t:
                return 0
            if(s[l] != t[r]):
                l += 1
            else:
                l += 1
                r += 1
        
        return len_t - r