# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        def check(right, left):
            if right is None and left is None:
                return True
            elif not left or not right:
                return False
            return left.val == right.val and check(right.right, left.left) and check(right.left, left.right)
        return check(root.right, root.left)
        