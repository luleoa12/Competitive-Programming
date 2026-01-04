class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        reverse = ""
      
        for i in range(len(s)):
            if s[i].isalpha():
                reverse += s[i]
                s = s[:i] +  "a" + s[i+1:]
        for i in range(len(s)):
            if s[i] == "a":
                s = s[:i] +  reverse[-1] + s[i+1:]
                reverse = reverse[:-1]
        return s

