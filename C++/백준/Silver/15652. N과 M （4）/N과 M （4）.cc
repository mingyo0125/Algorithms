#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> vec;

void Backtrack(int x)
{
    if (vec.size() == m)
    {
        sort(vec.begin(), vec.end());
        for (auto i : vec)
        {
            cout << i << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = x; i <= n; i++)
    {
        vec.push_back(i);
        Backtrack(i);
        vec.pop_back();
    }
}

int main()
{
    cin >> n >> m;
    Backtrack(1);
}