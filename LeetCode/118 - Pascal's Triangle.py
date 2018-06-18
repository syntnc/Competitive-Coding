class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        if numRows == 0:
            return []
        pascal = [[1]]
        for row in range(1, numRows):
            pascal.append([1] + [pascal[-1][i] + pascal[-1][i+1] for i in range(0, row - 1)] + [1])
        return pascal
