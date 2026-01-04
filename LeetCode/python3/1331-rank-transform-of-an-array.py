class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:

        rank = {}
        cur = 1
        arr_sort = sorted(arr)
        for num in arr_sort:
            if num not in rank:
                rank[num] = cur
                cur += 1
        ans = []

        for num in arr:
            ans.append(rank[num])
        return ans

