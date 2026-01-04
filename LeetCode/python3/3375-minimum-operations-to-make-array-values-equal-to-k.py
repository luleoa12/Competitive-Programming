class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        cur = set()
        for num in nums:
            if num < k:
                return -1
            elif num > k:
                cur.add(num)
        return len(cur)