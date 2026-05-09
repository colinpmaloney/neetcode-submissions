class Solution:
    def isPalindrome(self, s: str) -> bool:
        newS = ""
        for char in s:
            if char.isalnum():
                newS += char.lower()
        firstHalf = newS[:len(newS)//2]
        secondHalf = newS[len(newS)//2 + (1 if len(newS) % 2 == 1 else 0):][::-1]

        return firstHalf == secondHalf
