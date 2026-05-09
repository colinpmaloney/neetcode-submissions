class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        stack = []
        for num in arr[1:]:
            pops = 1
            while len(stack) and stack[-1] < num:
                pops += 1
                stack.pop()
            for pop in range(pops):
                stack.append(num)
        stack.append(-1)

        return stack
        

# Monotonic stack
"""

Check a number
if it is greater than the number on top
pop until it isn't x times
place x numbers on stack
place -1 to finish


"""