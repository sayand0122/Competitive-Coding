class Node:

    def __init__(self, data):

        self.left = None
        self.right = None
        self.data = data

    def insert(self, data):
        # Compare the new value with the parent node
        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data = data

    # A function to do inorder tree traversal

    def printInorder(self, root):

        if root:

            # First recur on left child
            self.printInorder(root.left)

            # then print the data of node
            print(root.data, end=" ")

            # now recur on right child
            self.printInorder(root.right)

    # A function to do postorder tree traversal

    def printPostorder(self, root):

        if root:

            # First recur on left child
            self.printPostorder(root.left)

            # then recur on right child
            self.printPostorder(root.right)

            # now print the data of node
            print(root.data, end=" ")

    # A function to do preorder tree traversal

    def printPreorder(self, root):

        if root:

            # First print the data of node
            print(root.data, end=" ")

            # Then recur on left child
            self.printPreorder(root.left)

            # Finally recur on right child
            self.printPreorder(root.right)


n = list(map(int, input().split()))
root = Node(n[0])
for i in range(1, len(n)):
    root.insert(n[i])
print("\nPre Order")
root.printPreorder(root)
print("\nPost Order")
root.printPostorder(root)
print("\nIn Order")
root.printInorder(root)
