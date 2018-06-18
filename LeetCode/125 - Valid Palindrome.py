class Solution:
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s = list(filter((lambda x: x.isalnum()), s.lower()))
        return s == s[::-1]
