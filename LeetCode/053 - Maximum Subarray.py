class Solution(object):
    def kadane(self, nums):
        curr_max, max_so_far = nums[0], nums[0]
        for i in range(1, len(nums)):
            curr_max = max(nums[i], curr_max + nums[i])
            max_so_far = max(max_so_far, curr_max)
        return max_so_far

    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        return self.kadane(nums)
