class MinStack(object):

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.stack = []
        self.min = None

    def push(self, x):
        """
        :type x: int
        :rtype: void
        """
        if self.stack == []:
            self.stack.append(x)
            self.min = x
        else:
            if x <= self.min:
                self.stack.append(self.min)
                self.min = x
            self.stack.append(x)

    def pop(self):
        """
        :rtype: void
        """
        if self.stack == []:
            return None
        popped = self.top()
        del self.stack[-1]
        if popped == self.min:
            self.min = self.top()
            if self.stack == []:
                return None
            del self.stack[-1]

    def top(self):
        """
        :rtype: int
        """
        if self.stack == []:
            return None
        return self.stack[-1]

    def getMin(self):
        """
        :rtype: int
        """
        return self.min


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
