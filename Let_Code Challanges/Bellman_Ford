# Bellman Ford Algorithm in Python
# work iwth any type of graphe (circular/non circular / negative edge/positive edge ............)
# this algorithm will result an infinite loop if we have an absorberance( when we have cycle with negeative sum)

class Graph:

    def __init__(self, vertices):
        self.V = vertices   # Total number of vertices in the graph
        self.graph = []     # Array of edges

    # Add edges
    def add_edge(self, s, d, w):
        self.graph.append([s, d, w])

    # Print the solution
    def print_solution(self, dist):
        print("Vertex Distance from Source")
        for i in range(self.V):
            print("{0}\t\t{1}".format(i, dist[i]))

    def bellman_ford(self, src):

        # Step 1: fill the distance array and predecessor array
        dist = [float("Inf")] * self.V
        # Mark the source vertex
        dist[src] = 0

        # Step 2: relax edges |V| - 1 times
        for _ in range(self.V - 1):
            for s, d, w in self.graph:
                if dist[s] != float("Inf") and dist[s] + w < dist[d]:
                    dist[d] = dist[s] + w

        # Step 3: detect negative cycle
        # if value changes then we have a negative cycle in the graph
        # and we cannot find the shortest distances
        for s, d, w in self.graph:
            if dist[s] != float("Inf") and dist[s] + w < dist[d]:
                print("Graph contains negative weight cycle")
                return

        # No negative weight cycle found!
        # Print the distance and predecessor array
        self.print_solution(dist)


g = Graph(7)
g.add_edge(0, 1, 4)   # a b 4
g.add_edge(0, 2, -2)  # a c -2
g.add_edge(1, 4, 5)   # b e 5
g.add_edge(1, 2, 7)   # b c 7
g.add_edge(2, 3, -5)  # c d -5
g.add_edge(2, 5, 25)  # c f 25  
g.add_edge(3, 1, 18)  # d b 18
g.add_edge(3, 4, 15)  # d e 15
g.add_edge(3, 6, 3)   # d g 3
g.add_edge(3, 5, 12)  # d f 12
g.add_edge(4, 6, 17)  # e g 17
g.add_edge(5, 6, 7)   # f g 7
g.add_edge(5, 4, -8)  # f e -8
g.bellman_ford(0)
