class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans = []
     
       
       
        for i in range(len(nums1)):
            check = False
            for j in range(nums2.index(nums1[i]),len(nums2)):
                if nums2[j] > nums1[i]:
                    ans.append(nums2[j])
                    check = True
                    break
            if check is False:
                ans.append(-1)
        return ans
                
            
