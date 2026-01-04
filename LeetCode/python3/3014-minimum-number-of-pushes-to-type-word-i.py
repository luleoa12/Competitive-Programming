class Solution:
    def minimumPushes(self, word: str) -> int:
        one = 0
        two = 0
        three = 0
        four = 0
        for l in word:
            if one != 8:
                one += 1
            elif two != 8:
                two += 1
            elif three != 8:
                three += 1
            else:
                four += 1
        return one + two*2 + three*3 + four*4
