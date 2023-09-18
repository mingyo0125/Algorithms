#include <iostream>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	map<int, int> _map;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		_map[input]++;
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int input;
		cin >> input;
		cout << _map[input] << " ";
	}
}