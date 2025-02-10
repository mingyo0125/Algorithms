#include <iostream>
#include <vector>
#include <set>
using namespace std;

int n, m;
vector<int> vec;
set<vector<int>> _set;

void Backtrack(int start)
{
    if (vec.size() == m)
    {
        _set.insert(vec);
        return;
    }

    for (int i = start; i <= n; i++)
    {
        vec.push_back(i);
        Backtrack(1);
        vec.pop_back();
    }
}

int main()
{
    cin >> n >> m;
    Backtrack(1);

    for (auto v : _set)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}
