#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	set<string> _set;
	vector<string> vec;

	int n, m;
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
			vec.push_back(input);
		}
	}
	
	cout << vec.size() << endl;
	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
}
