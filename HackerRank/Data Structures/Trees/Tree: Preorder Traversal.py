"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.data (the value of the node)
"""
def preOrder(root):
    #Write your code here
    if root:
        print(root.data, end=' ')
        preOrder(root.left)
        preOrder(root.right)
