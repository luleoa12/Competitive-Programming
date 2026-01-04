class Solution:
    def getSmallestString(self, s: str) -> str:
        ans = s
        for i in range(len(s)-1):
            if (int(s[i]) % 2 == 0 and int(s[i+1]) % 2 == 0) or (int(s[i]) % 2 == 1 and int(s[i+1]) % 2 == 1):
                cur = list(s[:])
                temp = cur[i]
                cur[i] = cur[i+1]
                cur[i+1] = temp
                if int(ans) > int("".join(cur)):
                    ans = "".join(cur)
          
        return str(ans)
