#include <iostream>
#include <string>
#include <list>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int a;
    cin >> a;

    set<int> have;

    for (int i = 0; i < a; i++)
    {
        int num;
        cin >> num;
        have.insert(num);
    }

    int b;
    cin >> b;

    for (int i = 0; i < b; i++)
    {
        int num;
        cin >> num;
        if (have.find(num) != have.end())
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    }
}
