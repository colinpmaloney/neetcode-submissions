class Solution:
    def calPoints(self, operations: List[str]) -> int:
        stack = []
        for operation in operations:
            if operation == "+":
                if len(stack) >= 2:
                    newVal = int(stack[-1]) + int(stack[-2])
                    stack.append(newVal)
            elif operation == "D":
                if stack:
                    stack.append(int(stack[-1])*2)
            elif operation == "C":
                if stack:
                    stack.pop()
            else:
                stack.append(int(operation))

        return sum(stack)