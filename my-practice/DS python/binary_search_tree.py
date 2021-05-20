class Node:

    def __init__(self, data):

        self.left = None
        self.right = None
        self.data = data

    def getroot(self):
        return self.root

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

    def search(self, root, key, l, count):
        if(l == count):
            return False

        if root is None or root.data == key:
            return True
        if root.data < key:
            return self.search(root.right, key, l, count+1)
        return self.search(root.left, key, l, count+1)


n = list(map(int, input().split()))
root = Node(n[0])
for i in range(1, len(n)):
    root.insert(n[i])
count = 0
key = int(input("Enter the value to search in the tree: "))
if root.search(root, key, len(n), count):
    print("found")
else:
    print("not found")
