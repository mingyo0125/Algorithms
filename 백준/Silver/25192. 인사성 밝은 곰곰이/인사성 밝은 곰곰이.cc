#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() 
{
    set<string> set;
    int n, cnt = 0;
    cin >> n;
    string input;

    for (int i = 0; i < n; i++)
    {
        cin >> input;

        if (input == "ENTER")
        {
            cnt += set.size();
            set.clear();
            continue;
        }

        set.insert(input);
    }

    cnt += set.size();

    cout << cnt;
}