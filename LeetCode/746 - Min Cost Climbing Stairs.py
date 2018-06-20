class Solution(object):
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        steps = len(cost)
        if steps == 2:
            return min(cost)
        dp = [0, 0, 0]
        for step in range(2, steps + 1):
            dp[2] = min(dp[1] + cost[step - 1], dp[0] + cost[step - 2])
            dp[0], dp[1] = dp[1], dp[2]
        return min(dp[1], dp[2])
