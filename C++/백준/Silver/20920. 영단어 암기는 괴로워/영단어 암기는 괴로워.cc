#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2)
{
    if (p1.second == p2.second)
    {
        if (p1.first.size() == p2.first.size())
        {
            return p1.first < p2.first;
        }
        return p1.first.size() > p2.first.size();
    }
    return p1.second > p2.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    string input;
    map<string, int> _map;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input.size() >= m)
        {
            _map[input]++;
        }
    }

    vector<pair<string, int>> sortedMap(_map.begin(), _map.end());
    sort(sortedMap.begin(), sortedMap.end(), compare);

    for (const auto& a : sortedMap)
    {
        cout << a.first << "\n";
    }
}