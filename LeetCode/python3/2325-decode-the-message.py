class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        cipher = {}
        count = 0
        alphabet = {i:chr(i+96) for i in range(1,27)}

        for char in key:
            if char != " ":
                if len(cipher) != 26 and char not in cipher:
                    count += 1

                    cipher[char] = alphabet[count]
        ans = ""
        for char in message:
            if char == " ":
                ans += " "
            else:
                ans += cipher[char]
        return ans