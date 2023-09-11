#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	return a.length() < b.length();
}

int main()
{
	int n;

	cin >> n;

	vector<string> vec;

	for (int i = 0; i < n; i++)
	{
		string input;

		cin >> input;

		if (find(vec.begin(), vec.end(), input) == vec.end())
		{
			vec.push_back(input);
		}
	}

	sort(vec.begin(), vec.end(), compare);

	for (string a : vec)
	{
		cout << a << "\n";
	}
}