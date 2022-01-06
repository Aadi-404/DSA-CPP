#include <bits/stdc++.h>
using namespace std;
template <typename T>
class graph
{
public:
    map<T, list<pair<T, int>>> adjList;
    void addEdge(T u, T v, int dist, bool bidirect = 0)
    {
        adjList[u].push_back({v, dist});
        if (bidirect)
        {
            adjList[v].push_back({u, dist});
        }
    }
    void printAdj()
    {
        for (auto it : adjList)
        {
            cout << it.first << " -> ";
            for (auto e : it.second)
            {
                cout << e.first << "(" << e.second << ")  ";
            }
            cout << endl;
        }
    }
    void bfsTraversal(int n)
    {
        map<T,bool> vis;
        for (auto i : adjList)
        {
            if (!vis[i.first])
            {
                queue<T> q;
                q.push(i.first);
                vis[i.first] = 1;
                while (!q.empty())
                {
                    T node = q.front();
                    q.pop();
                    cout << node << " ";
                    for (auto it : adjList[node])
                    {
                        if (!vis[it.first])
                        {
                            q.push(it.first);
                            vis[it.first] = 1;
                        }
                    }
                }
            }
        }
    }
    void dfsTraversal(int n)
};
main()
{
    graph<int> g;
    g.addEdge(0, 1, 0, 0);
    g.addEdge(0, 2, 4, 0);
    g.addEdge(2, 4, 6, 0);
    g.addEdge(8, 5, 3, 0);
    g.addEdge(2, 7, 34, 0);
    g.addEdge(5, 3, 5, 0);
    g.addEdge(3, 4, 6, 0);
    g.addEdge(8, 0, 34, 0);
    g.addEdge(9, 3, 23, 0);
    g.addEdge(4, 1, 87, 0);
    g.addEdge(5, 7, 12, 0);
    // g.printAdj();
    g.bfsTraversal(10);
}