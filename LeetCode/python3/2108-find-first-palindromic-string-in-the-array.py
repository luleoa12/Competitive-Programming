class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        def check(word):
            for i in range(len(word)//2+1):
                if word[i] != word[len(word)-i-1]:
                    return False
            return True
        ans = ""
        for word in words:
            if check(word):
                ans += word
                break
        return ans