def helper(num):
    sum_ = 0
    for i in num:
        sum_ += int(i)
    return sum_


class Solution:
    def countEven(self, num: int) -> int:
        count = 0
        for i in range(1, num+1):
          
            if helper(str(i)) % 2 == 0:
                count += 1
        return count