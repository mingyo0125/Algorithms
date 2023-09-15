#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	set<int> _set;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		
		_set.insert(input);
	}

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int input;
		cin >> input;

		if (_set.find(input) != _set.end())
		{
			cout << "1 ";
		}
		else
		{
			cout << "0 ";
		}
	}
}