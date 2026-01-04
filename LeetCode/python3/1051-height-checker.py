class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        check = sorted(heights)
        count = 0
        for i in range(len(heights)):
            if heights[i] != check[i]:
                count += 1
        return count
        