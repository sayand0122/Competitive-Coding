from collections import defaultdict, deque


class Graph(object):
    def __init__(self):
        self.nodes = set()
        self.edges = defaultdict(list)
        self.distances = {}

    def add_node(self, value):
        self.nodes.add(value)

    def add_edge(self, from_node, to_node, distance):
        self.edges[from_node].append(to_node)
        self.edges[to_node].append(from_node)
        self.distances[(from_node, to_node)] = distance


def dijkstra(graph, initial):
    visited = {initial: 0}
    path = {}

    nodes = set(graph.nodes)

    while nodes:
        min_node = None
        for node in nodes:
            if node in visited:
                if min_node is None:
                    min_node = node
                elif visited[node] < visited[min_node]:
                    min_node = node
        if min_node is None:
            break

        nodes.remove(min_node)
        current_weight = visited[min_node]

        for edge in graph.edges[min_node]:
            try:
                weight = current_weight + graph.distances[(min_node, edge)]
            except:
                continue
            if edge not in visited or weight < visited[edge]:
                visited[edge] = weight
                path[edge] = min_node

    return visited, path


def shortest_path(graph, origin, destination):
    visited, paths = dijkstra(graph, origin)
    full_path = deque()
    _destination = paths[destination]

    while _destination != origin:
        full_path.appendleft(_destination)
        _destination = paths[_destination]

    full_path.appendleft(origin)
    full_path.append(destination)

    return list(full_path)   # ,visited[destination]


graph = Graph()
print("\n")
print("Enter the nodes: ")
nd = list(input().split())                            # a b c d e f

for node in nd:
    graph.add_node(node)

c = ''
i = 0
while(c != 'q'):
    # add 2 vertex and their weight    ex - a b 20
    l = list(input().split())
    x, y, z = l[0], l[1], int(l[2])

    graph.add_edge(x, y, z)
    c = input("Enter q to quit or press any key to continue:  ")

print("\n")
print("Enter start and end vertex: ")                       # ex - a b
ques = list(input().split())
print(shortest_path(graph, ques[0], ques[1]))
