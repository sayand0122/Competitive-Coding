class Node:
    def __init__(self, val):
        self.l = None
        self.r = None
        self.v = val


class Tree:
    def __init__(self):
        self.root = None

    def getRoot(self):
        return self.root

    def add(self, val):
        if self.root is None:
            self.root = Node(val)
        else:
            self._add(val, self.root)

    def _add(self, val, node):
        if val < node.v:
            if node.l is not None:
                self._add(val, node.l)
            else:
                node.l = Node(val)
        else:
            if node.r is not None:
                self._add(val, node.r)
            else:
                node.r = Node(val)

    def printInorder(self, root):

        if root:
            self.printInorder(root.l)
            print(root.v, end=' '),
            self.printInorder(root.r)

    def printPostorder(self, root):

        if root:
            self.printPostorder(root.l)
            self.printPostorder(root.r)
            print(root.v, end=' ')

    def printPreorder(self, root):

        if root:
            print(root.v, end=' ')
            self.printPreorder(root.l)
            self.printPreorder(root.r)


tree = Tree()
c = 'y'
print("Enter q when you are done with entering elements\n")
while(True):
    x = input()
    if(x != 'q' and (isinstance(int(x), int) or x == None)):
        x = int(x)
        tree.add(x)
    else:
        break


print("Preorder traversal of binary tree is")
tree.printPreorder(tree.getRoot())
print('\n')

print("\nInorder traversal of binary tree is")
tree.printInorder(tree.getRoot())
print('\n')

print("\nPostorder traversal of binary tree is")
tree.printPostorder(tree.getRoot())
print('\n')
