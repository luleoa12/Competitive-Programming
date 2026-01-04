class Solution:
    def findGCD(self, nums: List[int]) -> int:
        small = 9999999999999
        large = -1
        for num in nums:
            if num < small:
                small = num
            if num > large:
                large = num


        for i in range(small, 0, -1):

            if large % i == 0 and small % i == 0:
                return i

        
