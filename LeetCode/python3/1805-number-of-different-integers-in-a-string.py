class Solution:
    def numDifferentIntegers(self, word: str) -> int:
        cur = ""
        ans = []
        
        for i in range(len(word)):
            print(ans)

            if not word[i].isnumeric():
                if cur != "" and int(cur) not in ans:
                    ans.append(int(cur))
                cur = ""
            else:
                cur += word[i]
        if cur != "" and int(cur) not in ans:
            ans.append(int(cur))
        return len(ans)

    
        