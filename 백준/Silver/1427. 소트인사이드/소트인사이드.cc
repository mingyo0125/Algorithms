#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[10];

	int input;
	cin >> input;

	int cnt = 0;

	while (input != 0)
	{
		arr[cnt] = input % 10;

		input /= 10;
		cnt++;
	}

	sort(arr, arr + cnt, greater<int>());

	for (int i = 0; i < cnt; i++)
	{
		cout << arr[i];
	}
}