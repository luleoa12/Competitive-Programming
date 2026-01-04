class Solution:
    def isPrefixString(self, s: str, words: List[str]) -> bool:
        check = ""
        i = 0
        while len(check) < len(s) and i != len(words):
            
            check += words[i]
            i += 1
        return check == s