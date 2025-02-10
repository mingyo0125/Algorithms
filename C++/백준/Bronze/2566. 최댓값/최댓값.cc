#include <iostream>
#include <string>

using namespace std;

int main()
{
	int arr[9][9] = {0};

	int best = 0;
	int bestiPos = 0;
	int bestjPos = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (best <= arr[i][j])
			{
				best = arr[i][j];
				bestiPos = i + 1;
				bestjPos = j + 1;
			}
		}
	}

	cout << best << "\n";
	cout << bestiPos << " " << bestjPos;
}
