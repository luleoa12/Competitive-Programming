class Solution:
    def minChanges(self, n: int, k: int) -> int:
        if n == k:
            return 0
        n = bin(n).replace("0b", "")
        k = bin(k).replace("0b", "")
        if len(n) > len(k):
            for i in range(len(n)-len(k)):
                k = "0" + k
        elif len(k) > len(n):
            for i in range(len(k)-len(n)):
                n = "0" + n
        count = 0

        for i in range(len(n)):
            if n[i] == "1" and k[i] == "0":
                count += 1
            elif n[i] == "0" and k[i] == "1":
                return -1
        return count