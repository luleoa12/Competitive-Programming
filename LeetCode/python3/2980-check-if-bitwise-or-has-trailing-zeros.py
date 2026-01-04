class Solution:

    def hasTrailingZeros(self, nums: List[int]) -> bool:
        def bitwise_or(nums1, nums2):
            ans = ""
            if len(nums1) > len(nums2):
                for i in range(len(nums1) - len(nums2)):
                    nums2 = "0" + nums2
            else:
                for i in range(len(nums2) - len(nums1)):
                    nums1 = "0" + nums1
            for i in range(len(nums1)):
                if nums1[i] == "1" or nums2[i] == "1":
                    ans = "1" + ans
                else:
                    ans = "0" + ans
            return ans
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                check = bitwise_or(bin(nums[i]).lstrip('0b'), bin(nums[j]).lstrip('0b'))
                
                if str(check).lstrip("0") != str(check):
                    return True
        return False