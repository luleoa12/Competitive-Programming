class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        check = []

        bad = []
        for i in range(len(nums)):
            if nums[i] not in check and nums[i] not in bad:
                check.append(nums[i])
            else:
                if nums[i] in check:
                    check.remove(nums[i])
                bad.append(nums[i])
        return sum(check)