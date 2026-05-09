class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0:
            return 0
        
        l, r = 1, (x//2)+1
        cur: int
        closest: int
        while l <= r:
            cur = l + (r-l) // 2
            res = cur * cur
            if res < x:
                l = cur + 1
                closest = cur
            elif res > x:
                r = cur - 1
            else:
                closest = cur
                break
        
        return closest
