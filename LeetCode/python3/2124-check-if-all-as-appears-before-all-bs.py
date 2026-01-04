class Solution:
    def checkString(self, s: str) -> bool:
        check = True
        for char in s:
            if char == "b" and check is True:
                check = False
            elif char == "a" and check is False:
                return False
        return True