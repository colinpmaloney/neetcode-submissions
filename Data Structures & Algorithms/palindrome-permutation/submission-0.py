class Solution:
    def canPermutePalindrome(self, s: str) -> bool:
        count: dict = Counter(s)
        seenOddAlready = False
        for key, value in count.items():
            if value % 2 == 1:
                if seenOddAlready:
                    return False
                seenOddAlready = True
        
        return True