#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int n, m, preNum = 0;
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
        Backtrack(i + 1);
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
        cout << endl;
    }
}