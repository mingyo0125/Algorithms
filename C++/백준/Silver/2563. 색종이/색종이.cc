#include <iostream>
#include <string>

using namespace std;

int main()
{
	int arr[100][100] = {0};

	int cnt;

	cin >> cnt;

	int sum = 0;

	for (int i = 0; i < cnt; i++)
	{
		int x, y;

		cin >> x;
		cin >> y;

		for (int j = y; j < y + 10; j++)
		{
			for (int k = x; k < x + 10; k++)
			{
				if (arr[j][k] == 0)
				{
					sum++;
					arr[j][k] = 1;
				}
			}
		}
	}

	cout << sum;
}
