class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        running_sum, map_sum, answer = 0, {0: 1}, 0
        for num in nums:
            running_sum += num
            answer += map_sum.get(running_sum - k, 0)
            map_sum[running_sum] = map_sum.get(running_sum, 0) + 1
        return answer
