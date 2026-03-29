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

const int MAX_V = 1e3;
int graph[MAX_V][MAX_V];

int main()
{
    int v, e, n1, n2, w, i, j;
    cin >> v >> e;
    for (i = 0; i < e; i++)
    {
        cin >> n1 >> n2 >> w;
        graph[n1][n2] = w;
        graph[n2][n1] = w;
    }

    for (i = 1; i <= v; i++)
    {
        for (j = 1; j <= v; j++)
            cout << graph[i][j] << " ";
        cout << "\n";
    }
    // Space O(V^2)
}