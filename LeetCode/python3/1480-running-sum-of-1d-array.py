class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        sum_, ans = 0, []
        for num in nums:
            sum_ += num
            ans.append(sum_)
        return ans