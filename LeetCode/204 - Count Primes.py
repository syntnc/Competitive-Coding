class Solution:
    def sieve(self, n):
        count = 0
        p = [0 for _ in range(n)]
        for i in range(2, n):
            if not p[i]:
                for j in range(i, n, i):
                    p[j] = 1
                count += 1
        return count
    
    def countPrimes(self, n):
        """
        :type n: int
        :rtype: int
        """
        return self.sieve(n)
