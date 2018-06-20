class Solution(object):
    def countPrimeSetBits(self, L, R):
        """
        :type L: int
        :type R: int
        :rtype: int
        """
        primes = set([2, 3, 5, 7, 11, 13, 17, 19])
        return sum(1 for number in range(L, R + 1) if bin(number).count('1') in primes)
