class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        for i in range(len(nums)-1):
            if nums[i] == nums[i+1]:
                nums[i] *= 2
                nums[i+1] = 0
            
        ans = []
        for num in nums:
            if num != 0:
                ans.append(num)
        for i in range(len(nums)-len(ans)):
            ans.append(0)
        return ans