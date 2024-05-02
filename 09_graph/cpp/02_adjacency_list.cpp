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

int main()
{
    int v, e, i, n1, n2;
    cin >> v >> e;
    vector<vector<int>> graph(v + 1);
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

    // Space O(v + e)
}