inline int random(int low, int high)
{
    srand(time(0));
    return ((rand() % (high - low + 1)) + low);
}

vector<int> __random(int amount, int low, int high)
{
    vector<int> t;
    srand(time(0));
    for (int i = 0; i < amount; i++)
        t.push_back(low + ((rand() % (high - low + 1))));
    return t;
}
