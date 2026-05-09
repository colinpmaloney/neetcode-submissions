class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l = 1
        r = max(piles)
        res = r
        while(l <= r):
            rate = (l+r) // 2
            hours = sum([math.ceil(x/rate) for x in piles])
            if hours > h:
                l = rate + 1
            else:
                r = rate - 1
                res = min(res, rate)

        return res