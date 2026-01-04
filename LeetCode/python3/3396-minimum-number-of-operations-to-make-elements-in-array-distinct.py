class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        
        check = [False] * 128
        for i in range(len(nums)-1, -1, -1):
            if check[nums[i]] == True:
                return (i//3)+1
            else:
                check[nums[i]] = True
        return 0