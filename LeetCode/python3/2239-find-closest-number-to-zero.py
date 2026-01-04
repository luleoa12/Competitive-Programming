class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        ans = 9999999999
        for num in nums:
            if abs(num) < abs(ans):
                ans = num
            elif abs(num) == abs(ans):
                if num > ans:
                    ans = num

        return ans