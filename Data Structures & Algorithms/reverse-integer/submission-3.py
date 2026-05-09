class Solution:
    def reverse(self, x: int) -> int:
        sign = -1 if x < 0 else 1
        x = -x if x < 0 else x

        rev = 0
        while x != 0:
            digit = x % 10
            x //= 10

            if rev >= pow(2,31) // 10:
                return 0

            rev = rev * 10 + digit
        
        
        return rev * sign