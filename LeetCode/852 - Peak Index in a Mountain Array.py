class Solution(object):
    def peakIndexInMountainArray(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        if A[0] > A[1]:
            return 0
        if A[-1] > A[-2]:
            return len(A) - 1
        low, high = 0, len(A)
        while low <= high:
            mid = (low + high) // 2
            if A[mid] > A[mid - 1] and A[mid] > A[mid + 1]:
                return mid
            if A[mid] < A[mid + 1]:
                low = mid + 1
            else:
                high = mid - 1
