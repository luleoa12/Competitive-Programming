class Solution:
    def countSymmetricIntegers(self, low: int, high: int) -> int:
        ans = 0
        for i in range(low, high+1):
            cur = str(i)
            n = len(cur)//2
            if len(cur) % 2 == 0:
  
                if sum(list(map(int,cur[:n]))) == sum(list(map(int, cur[n:]))):
                    ans += 1

        return ans