class Solution:
    def minimumSubarrayLength(self, nums: List[int], k: int) -> int:
        ans = 99999999999
        
        for i in range(len(nums)):
            for j in range(i+1, len(nums)+1):

                cur = nums[i:j]
              
                check = cur[0]
                for x in range(1, len(cur)):
                    check = check | cur[x]

                if check >= k:
                    ans = min(ans, len(cur))
        if ans == 99999999999:
            ans = -1
        return ans

        