# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:

        def traverse(root, left):
            ans = 0
            if root is not None:
                if root.left is None and root.right is None and left:
                    ans += root.val
                ans = ans+ traverse(root.right, False)+traverse(root.left, True)
            return ans


        return traverse(root, False)

            