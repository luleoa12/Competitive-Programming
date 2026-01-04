# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        ans = []
        def dfs(root, path):
            if root is None:
                return None
            if len(path) != 0:
                path += "->"
                path += str(root.val)
            else:
                path = str(root.val)
            if root.right is None and root.left is None:

                ans.append(path)
            dfs(root.right, path)
            dfs(root.left, path)


        dfs(root, "")
        return ans