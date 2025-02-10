#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	int n;

	cin >> n;

	pair<int, string> temp;
	vector<pair<int, string>> vec;

	for (int i = 0; i < n; i++)
	{
		cin >> temp.first >> temp.second;
		vec.push_back(temp);
	}

	stable_sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << vec[i].first << " " << vec[i].second << "\n";
	}

}