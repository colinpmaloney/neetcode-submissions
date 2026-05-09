class Solution:
    def longestPalindrome(self, s: str) -> str:
        start = 0
        length = 1

        for i in range(len(s)):
            l, r = i, i
            while l >= 0 and r < len(s) and s[l] == s[r]:
                currentLength = r-l + 1
                if currentLength > length:
                    length = currentLength
                    start = l
                r += 1
                l -= 1

            l, r = i, i + 1
            while l >= 0 and r < len(s) and s[l] == s[r]:
                currentLength = r-l + 1
                if currentLength > length:
                    length = currentLength
                    start = l
                r += 1
                l -= 1
        
        return s[start : start + length]