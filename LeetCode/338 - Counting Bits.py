class Solution(object):
    def countBits(self, num):
        """
        :type num: int
        :rtype: List[int]
        """
        answer = [0]
        for val in range(1, num + 1):
            answer.append(answer[val & (val - 1)] + 1)
        return answer
