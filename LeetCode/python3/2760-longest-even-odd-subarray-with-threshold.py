class Solution:
    def longestAlternatingSubarray(self, nums: List[int], threshold: int) -> int:
        ans = 0
        for i in range(len(nums)):
            if nums[i] % 2 == 0:
                for j in range(i, len(nums)):
                    check = True
                    for k in range(i, j+1):
                        if nums[k] > threshold:
                            check = False
                            break
                        if k != j and nums[k] % 2 == nums[k+1] % 2:
                            check = False
                            break
                    cur = j-i+1
                    if check and cur > ans:
                        ans = cur
        return ans

