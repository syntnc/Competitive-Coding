from math import sqrt

class Solution(object):
    @staticmethod
    def isSquare(n):
        return int(sqrt(n)) ** 2 == n
    
    def numSquares(self, n):
        """
        :type n: int
        :rtype: int
        """
        if self.isSquare(n):
            return 1
        while n & 3 == 0:
            n >>= 2
        if n & 7 == 7:
            return 4
        root = int(sqrt(n))
        for num in range(root + 1):
            if self.isSquare(n - num * num):
                return 2
        return 3