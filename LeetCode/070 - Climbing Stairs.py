class Solution(object):
    def fib(self, n):
        if n <= 1:
            return 1
        a, b = 1, 1
        for _ in range(n - 1):
            a, b = b, a+b
        return b
    
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        return self.fib(n)
