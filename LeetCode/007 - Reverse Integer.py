class Solution:
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        ans = -int(str(abs(x))[::-1]) if x < 0 else int(str(abs(x))[::-1])
        if ans < -2**31 or ans > 2**31 - 1:
            return 0
        return ans
