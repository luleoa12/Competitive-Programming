class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        morse = {"a": ".-","b": "-...","c": "-.-.","d": "-..","e":".","f":"..-.","g":"--.","h":"....","i":"..","j":".---","k":"-.-","l":".-..","m":"--","n":"-.","o": "---","p": ".--.","q":"--.-","r":".-.","s":"...","t":"-","u":"..-","v":"...-","w":".--","x":"-..-","y":"-.--","z":"--.."}
        ans = []
        for word in words:
            cur = ""
            for l in word:
                cur += morse[l]
            if cur not in ans:
                ans.append(cur)
        return len(ans)