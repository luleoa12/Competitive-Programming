class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        check = {}
        ans = 0
        word = list(set(word))
        for l in word:
            check[l] = 0
            if l == l.lower():

                if l.upper() in check:
                    ans += 1
                    check[l]=1
                    check[l.upper()]=1
            else:
                if l.lower() in check:
                    ans += 1
                    check[l]=1
                    check[l.lower()]=1

        return ans

                