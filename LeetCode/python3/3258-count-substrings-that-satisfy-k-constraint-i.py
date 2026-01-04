class Solution:
    def countKConstraintSubstrings(self, s: str, k: int) -> int:
        def num_zeros(s):
            one = 0
            zero = 0
            for i in range(len(s)):
                if s[i] == "0":
                    zero += 1
                else:
                    one += 1
            return [zero, one]
        count = 0  

        for i in range(len(s)):
            for j in range(i+1, len(s)+1):
                check = num_zeros(s[i:j])
               
        

                if check[0] <= k or check[1] <= k:
                    count += 1

        return count