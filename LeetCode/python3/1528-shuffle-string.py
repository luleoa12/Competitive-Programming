class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        key = {}
        for i in range(len(s)):
            key[indices[i]] = s[i]

        key = dict(sorted(key.items()))

        ans = ""
        for k in key:
            ans += str(key[k])
        return ans
