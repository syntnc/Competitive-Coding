class Solution:
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) <= 1:
            return len(nums)
        pos = 0
        for i in range(len(nums) - 1):
            if nums[i] != nums[i + 1]:
                pos += 1
                nums[pos] = nums[i + 1]
        return pos + 1
