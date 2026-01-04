class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        cur = ""
        for char in paragraph.lower():
            if char.isalnum():
                cur += char
            elif char == ",":
                cur += " "
            elif char != "." and cur[-1] != " ":
                cur += " "

        print(cur)
        paragraph = cur.split(" ")
        print(paragraph)
        count = Counter(paragraph)
        max_ = [0, ""]
        for word in paragraph:
            if word not in banned:
                check = count[word]
                if check > max_[0]:
                    max_ = [check, word]
        return max_[1]