#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;

	cin >> n;

	vector<pair<int,int>> vec;
	
	for (int i = 0; i < n; i++)
	{
		int x, y;

		cin >> x >> y;

		vec.push_back({y,x});
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < n; i++)
	{
		cout << vec[i].second << " " << vec[i].first << "\n";
	}
}