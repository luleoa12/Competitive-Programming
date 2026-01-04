class Solution:
    def minimumAverage(self, nums: List[int]) -> float:
        nums.sort()
        ans = 999999999999999
        while len(nums) != 0:
            if (nums[0] + nums[-1])/2 < ans:
                ans = (nums[0] + nums[-1])/2
            nums.remove(nums[0])
            nums.remove(nums[-1])
        return ans