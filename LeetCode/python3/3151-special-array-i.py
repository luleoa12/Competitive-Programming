class Solution:
    def isArraySpecial(self, nums: List[int]) -> bool:
        if len(nums) == 1:
            return True

        if nums[0] % 2 == 0:
            even = True
        else:
            even = False
        for i in range(1, len(nums)):
            
            if nums[i] % 2 == 0:
                if even:
                    return False
                even = True

            elif nums[i] % 2 == 1:
                if not even:
                    return False
                even = False
        return True

        