class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        terms = ['1']
        for _ in range(n - 1):
            new_term, index = '', 0
            while index < len(terms[-1]):
                char = terms[-1][index]
                next_index, count = index, 0
                while next_index < len(terms[-1]) and terms[-1][next_index] == char:
                    count += 1
                    next_index += 1
                index += count
                new_term += str(count) + char
            terms.append(new_term)
        return(terms[-1])
