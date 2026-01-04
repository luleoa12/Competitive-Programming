class Solution:
    def maxScore(self, a: List[int], b: List[int]) -> int:
        check1 = float('-inf')
        check2 = float('-inf')
        check3 = float('-inf')
        check4 = float('-inf')

        for n in b:
            check1 = max(check1, check2+a[3]*n)
            check2 = max(check2, check3+a[2]*n)
            check3 = max(check3, check4+a[1]*n)
            check4 = max(check4, a[0]*n)
        return check1