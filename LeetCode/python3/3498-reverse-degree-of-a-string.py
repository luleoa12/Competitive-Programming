class Solution:
    def reverseDegree(self, s: str) -> int:
        ans = 0
        for i in range(len(s)):

            char = s[i].upper()
            print(ord(char))
            cur = 26 - (ord(char) - 65)
            ans += cur*(i+1)
        return ans