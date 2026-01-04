class Solution:
    def findPermutationDifference(self, s: str, t: str) -> int:

        s1 = {}
        s2 = {}
        for i in range(len(s)):

            s1[s[i]] = i
        for i in range(len(t)):
            s2[t[i]] = i
        ans = 0
        print(s1)
        print(s2)
        for l in s:

            ans += abs(s1[l]-s2[l])
        return ans

            
            