class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        check = {}
        count = 0
        for i in range(len(arr)):
            if arr[i] not in check:
                check[arr[i]] = 1
            else:
                check[arr[i]] += 1
        
        for num in check:
            if check[num] == 1:
                count += 1
                if count == k:
                    return num
        return ""