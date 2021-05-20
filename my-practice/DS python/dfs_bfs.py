from collections import defaultdict


class Graph:
    def __init__(self):
        self.graph = defaultdict(list)

    def addEdge(self, u, v):
        self.graph[u].append(v)

    def BFS(self, s):
        visited = [False] * (max(self.graph) + 1)
        queue = []
        queue.append(s)
        visited[s] = True

        while queue:
            s = queue.pop(0)
            print(s, end=" ")
            for i in self.graph[s]:
                if visited[i] == False:
                    queue.append(i)
                    visited[i] = True

    def DFSUtil(self, v, visited):
        visited.add(v)
        print(v, end=' ')
        for neighbour in self.graph[v]:
            if neighbour not in visited:
                self.DFSUtil(neighbour, visited)

    def DFS(self, v):
        visited = set()
        self.DFSUtil(v, visited)


g = Graph()
c = ''
while(c != 'q'):
    l = list(map(int, input().split()))
    x, y = l[0], l[1]

    g.addEdge(x, y)
    c = input("Enter q to quit or press any key to continue:  ")
print("\n")
k = int(input("Enter an vertex to start the BFS and DFS:  "))
print("\n")
print("Following is Breadth First Traversal"
      " (starting from vertex {})".format(k))
g.BFS(k)
print("\n")
print("Following is Breadth First Traversal"
      " (starting from vertex {})".format(k))
g.DFS(k)
