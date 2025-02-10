#include <iostream>
#include <map>
#include <string>
using namespace std;
string arr[100001];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	map<string, int> _map;

	for (int i = 1; i <= n; i++)
	{
		string input;
		cin >> input;
		_map.insert(make_pair(input, i));
		arr[i] = input;
	}

	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;

		if (_map.find(input) != _map.end())
		{
			cout << _map.find(input)->second << "\n";
		}
		else
		{
			int index = stoi(input);
			cout << arr[index] << "\n";
		}
	}
}