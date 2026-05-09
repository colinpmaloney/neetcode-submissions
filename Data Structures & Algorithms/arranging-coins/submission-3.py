class Solution:
    def calcCoins(self, row: int) -> int:
        return row * (row + 1) / 2

    def arrangeCoins(self, n: int) -> int:
        l = 0
        r = pow(2,31) - 1
        row = -1
        bestRow = row
        while l <= r:
            row = l + (r-l) // 2
            calcCoinsAtRow = self.calcCoins(row)
            print(calcCoinsAtRow, l, row, r, n)
            if calcCoinsAtRow > n:
                r = row - 1
            elif calcCoinsAtRow < n:
                l = row + 1
                bestRow = row
            else:
                bestRow = row
                break
        
        return bestRow