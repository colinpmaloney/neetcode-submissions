class Solution:
    def arrangeCoins(self, n: int) -> int:
        row = 0
        while n >= 0:
            row += 1
            n -= row

        
        return row if n==0 else row - 1