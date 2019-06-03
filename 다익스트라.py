#p586_8_4_02_shortest_path.py




INF = float("inf")




def dijkstra(cost):

    n = len(cost)

    dist = [INF] * n




    dist[0] = 0   # cost from 0 --> 0 is zero.  

    for i in range(n):

        for j in range(i+1,n):

            tmp = dist[j]

            dist[j] = min(dist[j], dist[i] + cost[i][j])

            if dist[j] < tmp :

                print(i, "->", j, " : dist[", j, "] = ", dist[j])

    return dist[n-1]





if __name__ == '__main__':

    cost = [ [ 0,  2, INF, INF, INF,   1, INF, INF],         # cost[i][j] is the cost of

             [-1,  0,   2,   2,   4, INF, INF, INF],         # going from i --> j

             [-1, -1,   0, INF,   3, INF, INF,   1],         

             [-1, -1,   0,   0,   4,   3, INF, INF],         

             [-1, -1,  -1,  -1,   0, INF,   7, INF],         

             [-1, -1,  -1,  -1,  -1,   0,   5, INF],         

             [-1, -1,  -1,  -1,  -1,  -1,   0,   6],         

             [-1, -1,  -1,  -1,  -1,  -1,  -1,   0] ]         

                          

    total_len = len(cost)

    mcost = dijkstra(cost)

    print("The Minimum cost to reach node %d is %d" % (total_len-1, mcost))
