class Solution:
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        carry, index = (digits[-1] + 1) // 10, len(digits) - 2
        digits[-1] = (digits[-1] + 1) % 10
        while carry and index >= 0:
            carry = (digits[index] + 1) // 10
            digits[index], index = (digits[index] + 1) % 10 , index - 1
        if carry:
            digits = [1] + digits
        return digits
            