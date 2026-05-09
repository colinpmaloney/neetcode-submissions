class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if num == 1:
            return True
        l, r = 1, (num // 2)
        
        while l <= r:
            cur = (r+l) // 2
            res = cur * cur
            if res > num:
                r = cur - 1
            elif res < num:
                l = cur + 1
            else:
                return True
        
        return False
