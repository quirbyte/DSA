#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;

    void addEdge(int u, int v, int w)
    {
        adj[u].push_back({v, w}); // Directed edge u -> v with weight w
    }

    void dfs(int node, unordered_map<int, bool> &visited, stack<int> &topo)
    {
        visited[node] = true;
        for (auto &nbr : adj[node])
            if (!visited[nbr.first])
                dfs(nbr.first, visited, topo);
        topo.push(node);
    }

    vector<int> shortestPath(int n, int src)
    {
        unordered_map<int, bool> visited;
        stack<int> topo;
        for (int i = 0; i < n; ++i)
            if (!visited[i])
                dfs(i, visited, topo);

        vector<int> dist(n, INT_MAX);
        dist[src] = 0;

        while (!topo.empty())
        {
            int node = topo.top();
            topo.pop();
            if (dist[node] != INT_MAX)
            {
                for (auto &nbr : adj[node])
                {
                    int v = nbr.first, wt = nbr.second;
                    if (dist[node] + wt < dist[v])
                        dist[v] = dist[node] + wt;
                }
            }
        }
        return dist;
    }
};

int main()
{
    int n, m;
    cout << "Enter number of nodes and number of edges: ";
    cin >> n >> m;

    Graph g;
    cout << "Enter each edge in format: from to weight\n";
    for (int i = 0; i < m; ++i)
    {
        int u, v, w;
        cout << "Edge " << i + 1 << ": ";
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }

    int src;
    cout << "Enter source node for shortest paths: ";
    cin >> src;

    auto dist = g.shortestPath(n, src);

    cout << "\nShortest paths from node " << src << ":\n";
    for (int i = 0; i < n; ++i)
        cout << "To " << i << " : " << (dist[i] == INT_MAX ? "INF" : to_string(dist[i])) << endl;

    return 0;
}
