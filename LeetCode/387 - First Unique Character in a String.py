class Solution:
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        from collections import defaultdict
        char_map = defaultdict(lambda: 0)
        for char in s:
            char_map[char] += 1
        for i, char in enumerate(s):
            if char_map[char] == 1:
                return i
        return -1
