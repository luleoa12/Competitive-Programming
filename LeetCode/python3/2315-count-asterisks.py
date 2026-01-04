class Solution:
    def countAsterisks(self, s: str) -> int:
        check = 0
        ans = 0
        for i in range(len(s)):
            if s[i] == "|":
                check += 1
            if check % 2 == 0:
                if s[i] == "*":
                    ans += 1
        return ans