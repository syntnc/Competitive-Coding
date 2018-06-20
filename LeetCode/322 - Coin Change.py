class Solution(object):
    def coinChange(self, coins, amount):
        """
        :type coins: List[int]
        :type amount: int
        :rtype: int
        """
        dp = [0] + [10 ** 9 for _ in range(amount)]
        coins.sort()
        for coin in coins:
            if coin > amount:
                break
            dp[coin] = 1
            for curr_amt in range(coin + 1, amount + 1):
                dp[curr_amt] = min(dp[curr_amt], dp[curr_amt - coin] + 1)
        return dp[amount] if dp[amount] != 10 ** 9 else -1
