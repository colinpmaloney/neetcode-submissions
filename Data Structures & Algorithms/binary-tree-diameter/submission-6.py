# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def dfs(self, root):
        if root is None:
            return 0

        return max(
            1 + self.dfs(root.right),
            1 + self.dfs(root.left)
        )
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        
        newLeft = 0
        newRight = 0
        if root.left:
            newLeft = self.dfs(root.left.left) + self.dfs(root.left.right)
        if root.right:
            newRight = self.dfs(root.right.left) + self.dfs(root.right.right)
        
        return max(
            self.dfs(root.left) + self.dfs(root.right),
            newLeft,
            newRight
        )