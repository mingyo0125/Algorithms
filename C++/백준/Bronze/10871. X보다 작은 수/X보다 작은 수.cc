#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	//cin.tie(NULL);
	//std::ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;
	vector<int> v;
	int d;
	for (int i = 0; i < a; i++)
	{
		int c;
		cin >> c;

		if (c < b)
		{
			d = c;
			v.push_back(d);
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}