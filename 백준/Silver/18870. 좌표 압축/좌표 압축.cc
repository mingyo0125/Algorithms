#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[1000001];
int main()
{
	int n;

	cin >> n;

	vector<int> vec;
	vector<int> vec2;

	for (int i = 0; i < n; i++)
	{
		long input;

		cin >> input;

		vec.push_back(input);
		vec2.push_back(input);
	}

	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	for (int i = 0; i < n; i++)
	{
		cout << lower_bound(vec.begin(), vec.end(), vec2[i]) - vec.begin() << " ";
	}
}