class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        stack = []
        st: set = set()
        for i, num in enumerate(nums):
            if num in st:
                stack.append(i)
            st.add(num)
        
        while stack:
            nums.pop(stack[-1])
            stack.pop()
        return len(nums)