#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Seed should be different each time
    // Seed should be constantly changing
    // Use current time as seed

    time_t current_time = time(NULL);

    srand(current_time);

    for (int i = 0; i < 10; i++)
    {
        cout << rand() % 10 + 1 << " ";
    }
    cout << "\n";
}