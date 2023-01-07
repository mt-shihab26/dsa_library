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

const int MAX_V = 1e3;
int graph[MAX_V][MAX_V];

int main()
{
    int v, e, n1, n2, i, j;
    cin >> v >> e;
    for (i = 0; i < e; i++)
    {
        cin >> n1 >> n2;
        graph[n1][n2] = 1;
        graph[n2][n1] = 1;
    }

    for (i = 1; i <= v; i++)
    {
        for (j = 1; j <= v; j++)
            cout << graph[i][j] << " ";
        cout << "\n";
    }
    // Space O(V^2)
}