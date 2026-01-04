class Solution:
    def clearDigits(self, s: str) -> str:
        i = 0
        while not s.isalpha() :
            if s == "":
                break
            else:
                if s[i].isnumeric():
                    s = s[:i-1] + s[i+1:]
                    i = 0
                i += 1
        return s
