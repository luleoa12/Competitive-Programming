class Solution:
    def removeDigit(self, number: str, digit: str) -> str:
        check = []
        for i in range(len(number)):
            if number[i] == digit:
                check.append(number[:i]+number[i+1:])
        return max(check)