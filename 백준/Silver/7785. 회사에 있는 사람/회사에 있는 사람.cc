#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n;
	map<string,string,greater<string>> _map;

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		string name, state;
		cin >> name >> state;

		if (state == "enter")
		{
			_map.insert(make_pair(name, state));
		}
		else if (state == "leave")
		{
			_map.erase(name);
		}
	}

	for (auto a: _map)
	{
		cout << a.first << "\n";
	}
}