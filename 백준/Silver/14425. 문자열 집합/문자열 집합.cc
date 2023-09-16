#include <iostream>
#include <set>
using namespace std;

int main()
{
	int n, m;
	set<string> _set;
	int cnt = 0;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;

		_set.insert(input);
	}

	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;

		if (_set.find(input) != _set.end())
		{
			cnt++;
		}
	}
	cout << cnt;
}