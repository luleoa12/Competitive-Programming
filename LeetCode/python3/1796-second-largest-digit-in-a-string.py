class Solution:
    def secondHighest(self, s: str) -> int:
        ans = []
        for i in range(len(s)):
            if s[i].isnumeric() and s[i] not in ans:
                ans.append(s[i])
            
        try:
            return int(sorted(ans, reverse=True)[1])
        except:
            return -1
