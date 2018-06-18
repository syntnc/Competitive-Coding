class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        begin, end, profit = 0, 0, 0
        up, down = False, False
        for i in range(1, len(prices)):
            if prices[i] > prices[i - 1] and not up:
                up, down = True, False
                begin = i - 1
            elif prices[i] < prices[i - 1] and not down:
                up, down = False, True
                end = i - 1
                profit += prices[end] - prices[begin]
        if begin < len(prices) and up:
            profit += prices[-1] - prices[begin]
        return profit
