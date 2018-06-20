class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if nums == []:
            return -1
        majority, count = nums[0], 1
        for index in range(1, len(nums)):
            count += 1 if nums[index] == majority else -1
            if count == 0:
                majority = nums[index]
                count = 1
        return majority
