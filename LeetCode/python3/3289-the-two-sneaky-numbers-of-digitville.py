class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        ans = [i for i in range(max(nums)+1)]
        for n in ans:

            nums.remove(n)
        return nums
