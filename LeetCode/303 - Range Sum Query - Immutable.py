class NumArray(object):

    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        self.running_sum = [0]
        for num in nums:
            self.running_sum.append(self.running_sum[-1] + num)

    def sumRange(self, i, j):
        """
        :type i: int
        :type j: int
        :rtype: int
        """
        return self.running_sum[j + 1] - self.running_sum[i]


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(i,j)
