from itertools import repeat

class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums3 = [i for i in nums1 if i in nums2]
        nums3 = set(nums3)
        result = list()
        for i in nums3:
            a = min(nums1.count(i), nums2.count(i))
            result.extend(repeat(i,a))
        return result