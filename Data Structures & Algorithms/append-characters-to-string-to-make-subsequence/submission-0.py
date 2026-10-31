class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        if t in s:
            return 0
        
        l, r = 0, 0

        while l < len(s):
            if r >= len(s):
                return 0
            if(s[l] != t[r]):
                l += 1
            else:
                l += 1
                r += 1
        
        return len(t) - r
            

"""

coaching / coding
coxxxxxx / xxding

create pointers l and r
while l is in range of len(s)
check if r is in range of len(t)
if r is not in range then we completed all of r so return 0
check if the value at t[r] = s[l]
if they are the same move r and l forward
if they are not only move l forward

after the while loop
return characters left in r that were'nt appended


racecar / care
xxxxcar / care

"""