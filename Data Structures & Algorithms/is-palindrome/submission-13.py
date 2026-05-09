class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = "".join([char.lower() for char in s if char.isalnum()])
        if len(s) % 2 == 0:
            l, r = len(s) // 2 - 1, len(s) // 2
            while l >= 0 and r < len(s):
                if s[l] != s[r]:
                    return False
                l -= 1
                r += 1
            return True

        l = r = len(s) // 2
        while l >= 0 and r < len(s):
            if s[l] != s[r]:
                return False
            l -= 1
            r += 1

        return True
            