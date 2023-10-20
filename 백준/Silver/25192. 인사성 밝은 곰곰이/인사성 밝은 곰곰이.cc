#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() 
{
    set<string> _set;
    int n, cnt = 0;
    cin >> n;
    string input;

    for (int i = 0; i < n; i++)
    {
        cin >> input;

        if (input == "ENTER")
        {
            cnt += _set.size();
            _set.clear();
            continue;
        }

        _set.insert(input);
    }

    cnt += _set.size();

    cout << cnt;
}
