class Solution(object):
    def flipAndInvertImage(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        dimension = len(A)
        for i in range(dimension):
            for j in range(dimension - dimension // 2):
                A[i][j], A[i][-j - 1] = 1 - A[i][-j - 1], 1 - A[i][j]
        return A