class Solution:
    def minimumChairs(self, s: str) -> int:
        ans = 0
        cur = 0
        for i in range(len(s)):
            if s[i] == "E":
                cur += 1
            else:
                cur -= 1
            if cur > ans:
                ans = cur
        return ans 
            