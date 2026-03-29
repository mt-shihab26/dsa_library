/*
There are N vertices and M edges of undirected graph.
then given m edges configuration and weight
6 9
1 3 3
1 5 2
3 5 7
3 4 8
3 6 9
3 2 1
2 6 2
4 6 4
5 6 3
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, e, i, n1, n2, w;
    cin >> v >> e;
    vector<vector<pair<int, int>>> graph(v + 1);
    for (i = 1; i <= e; i++)
    {
        cin >> n1 >> n2 >> w;
        graph[n1].push_back({n2, w});
        graph[n2].push_back({n1, w});
    }

    for (i = 1; i <= v; i++)
    {
        cout << i << " -> ";
        for (pair<int, int> x : graph[i])
            cout << x.first << ": " << x.second << ", ";
        cout << "\n";
    }

    // Space O(v + e)
}