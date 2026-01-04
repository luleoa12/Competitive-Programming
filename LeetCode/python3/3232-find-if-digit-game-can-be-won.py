class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:
        one_sum = 0
        two_sum = 0
        for num in nums:
            if num < 10:
                one_sum += num
            else:
                two_sum += num
        return not(one_sum == two_sum)