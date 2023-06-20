#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    set<string> unheard;
    vector<string> result;

    for (int i = 0; i < n; i++) 
    {
        string name;
        cin >> name;
        unheard.insert(name);
    }

    for (int i = 0; i < m; i++) 
    {
        string name;
        cin >> name;
        if (unheard.find(name) != unheard.end()) 
        {
            result.push_back(name);
        }
    }

    sort(result.begin(), result.end());
    cout << result.size() << '\n';
    for (string& name : result) 
    {
        cout << name << '\n';
    }

    return 0;
}