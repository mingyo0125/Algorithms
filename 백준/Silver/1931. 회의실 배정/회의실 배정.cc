#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define longlong long long

int main()
{
    vector<pair<int, int>> vec;
    pair<int, int> cur;

    int n, start, end, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> start >> end;

        vec.push_back(make_pair(end,start));
    }

    sort(vec.begin(), vec.end());

    for (auto v : vec)
    {
        if (cur.first <= v.second)
        {
            cur = v;
            cnt++;
        }
    }

    cout << cnt;
}