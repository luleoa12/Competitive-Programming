class Solution:
    def maximumStrongPairXor(self, nums: List[int]) -> int:
        ans = 0
        print(1^1)
        print(1^10)
        print(10^3)
        print(3^9)
        for i in range(len(nums)-1):
            for j in range(i+1, len(nums)):

                x = nums[i]
                y = nums[j]
                if abs(x-y) <= min(x, y):
                    if x^y > ans:
                        ans = x^y
      
        return ans