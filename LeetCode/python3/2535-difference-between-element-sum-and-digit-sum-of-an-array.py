class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:

        return abs(sum([int(x) for x in "".join(list(map(str, nums)))])- sum(nums))