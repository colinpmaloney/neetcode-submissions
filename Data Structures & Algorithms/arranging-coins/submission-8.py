class Solution:
    def calcCoins(self, row: int) -> int:
        return row * (row + 1) / 2

    def arrangeCoins(self, n: int) -> int:
        if n <= 3:
            return 1 if n <3 else 2
        l = 0
        r = (n // 2) + 1
        row = -1
        while l < r:
            row = l + (r-l) // 2
            calcCoinsAtRow = self.calcCoins(row)
            if calcCoinsAtRow < n:
                l = row + 1
            else:
                r = row
        
        return l - 1