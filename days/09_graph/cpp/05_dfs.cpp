/*
There are N vertices and M edges of undirected graph.
then given m edges configuration
6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6
*/

#include <bits/stdc++.h>
using namespace std;

int ct = 0;

void dfs(int vertex, vector<vector<int>> &graph, vector<bool> &vis)
{
    vis[vertex] = true;
    cout << vertex << "\n";
    /**
     * Take action on vertex after enter
     * the vertex
     */
    for (int child : graph[vertex])
    {
        ct++;
        cout << "par " << vertex << ", child " << child;
        if (vis[child] == true)
        {
            cout << " visited\n";
            continue;
        }
        cout << "\n";
        /**
         * Take action on child before
         * entering the child node
         */
        dfs(child, graph, vis);
        /**
         * Take action on child
         * after exiting child node
         */
    }
    /**
     * Take action on vertex before
     * exiting the vertex
     */
}

int main()
{
    int v, e, i, n1, n2;
    cin >> v >> e;
    vector<vector<int>> graph(v + 1);
    vector<bool> vis(v + 1);
    for (i = 1; i <= e; i++)
    {
        cin >> n1 >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }

    for (i = 1; i <= v; i++)
    {
        cout << i << " -> ";
        for (int x : graph[i])
            cout << x << " ";
        cout << "\n";
    }
    cout << "\n";

    dfs(1, graph, vis);
    cout << "\n";

    for (i = 1; i <= 6; i++)
        cout << vis[i] << " ";
    cout << "\n";

    cout << ct << "\n";

    // Space O(v + e)
    // Time O(v + 2*e) -> O(v + e)
}