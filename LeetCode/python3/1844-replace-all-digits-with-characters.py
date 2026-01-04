class Solution:
    def replaceDigits(self, s: str) -> str:
        alphabet = {i - 96: chr(i) for i in range(97, 123)}
        alphabet2 = {chr(i): i - 96 for i in range(97, 123)}
        print(alphabet2)
        print(alphabet)
        for i in range(len(s)):
            if s[i].isdigit():

                s = s[:i] + alphabet[alphabet2[s[i-1]]+int(s[i])] + s[i+1:]
        return s