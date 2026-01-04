# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        def depth(root, max_depth):
            if root == None:
                return max_depth
            else:
                max_depth += 1
                return max(depth(root.right, max_depth), depth(root.left, max_depth))

        return depth(root, 0)
        