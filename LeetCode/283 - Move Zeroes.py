class Solution:
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        store, scan = 0, 0
        while store < len(nums) and scan < len(nums):
            while scan < len(nums) and nums[scan] == 0:
                scan += 1
            if scan < len(nums):
                nums[store] = nums[scan]
            else:
                store -= 1
            store += 1
            scan += 1
        for index in range(store, len(nums)):
            nums[index] = 0
