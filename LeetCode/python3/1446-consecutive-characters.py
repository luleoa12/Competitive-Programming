class Solution:
    def maxPower(self, s: str) -> int:
        max_length = 0
        cur_letter = s[0]
      
        count = 0
        for i in range(len(s)):
            if s[i] == cur_letter:

                count += 1
            else:
                if count > max_length:
                    max_length = count
                count = 1
                cur_letter = s[i]
        if count > max_length:
            max_length = count
        return max_length