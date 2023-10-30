#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> vec;

void Backtrack(int n, int m)
{
    if (vec.size() == m)
    {
        for (auto i : vec)
        {
            cout << i << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (find(vec.begin(), vec.end(), i) == vec.end())
        {
            vec.push_back(i);
            Backtrack(n,m);
            vec.pop_back();
        }
    }
}

int main()
{
    cin >> n >> m;
    Backtrack(n, m);
}