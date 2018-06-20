class Solution(object):
    def singleNonDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        low, high = 0, len(nums)
        while low <= high:
            mid = (low + high) // 2
            if mid == len(nums) - 1:
                return nums[mid]
            if nums[mid] == nums[mid + 1]:
                if mid % 2:
                    high = mid
                else:
                    low = mid + 2
            elif nums[mid] == nums[mid - 1]:
                if mid % 2:
                    low = mid + 1
                else:
                    high = mid - 1
            else:
                return nums[mid]
