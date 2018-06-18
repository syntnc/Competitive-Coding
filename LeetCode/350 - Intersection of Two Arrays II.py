class Solution:
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        nums1.sort()
        nums2.sort()
        i, j = 0, 0
        answer = []
        while i != len(nums1) and j != len(nums2):
            while nums2[j] < nums1[i]:
                j += 1
                if j == len(nums2):
                    return answer
            if nums1[i] == nums2[j]:
                answer.append(nums1[i])
                j += 1
            i += 1
        return answer
