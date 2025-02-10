#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	//cin.tie(NULL);
	//std::ios_base::sync_with_stdio(false);

	int a;
	cin >> a;
	
	int input;
	vector<int> v;

	for (int i = 0; i <a; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	int find;
	cin >> find;
	int cnt = 0;

	for (int i = 0; i < v.size(); i++) 
	{
		if (v[i] == find)
		{
			cnt++;
		}
	}
	
	cout << cnt;
}