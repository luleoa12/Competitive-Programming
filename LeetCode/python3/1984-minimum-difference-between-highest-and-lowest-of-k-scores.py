class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        if k == 1:
            return 0
        nums.sort()
        ans = 9999999999

        for i in range(len(nums)-k+1):
            cur = nums[i+k-1] - nums[i]
            if cur < ans:
                ans = cur

        
        return ans