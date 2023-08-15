#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;

	cin >> x >> y >> w >> h;

	int length[4] = { x, y, w - x, h - y };

	int min = 1000;

	for (int i = 0; i < 4; i++)
	{
		if (min >= length[i])
		{
			min = length[i];
		}
	}

	cout << min;
}