#include <iostream>
#include <set>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	set<int> _set;

	for (int i = 0; i < a + b; i++)
	{
		int input;
		cin >> input;

		if (_set.find(input) != _set.end())
		{
			_set.erase(input);
		}
		else
		{
			_set.insert(input);
		}
	}

	cout << _set.size();
}