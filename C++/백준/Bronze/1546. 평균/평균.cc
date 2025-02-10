#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int cnt;
	cin >> cnt;

	float beforeArr[1000];
	float afterArr[1000];

	float bestScore = 0;
	float average = 0;
	float sum = 0;

	for (int i = 0; i < cnt; i++)
	{
		int point;
		cin >> point;

		bestScore = bestScore < point ? point : bestScore;

		beforeArr[i] = point;
	}

	for(int i = 0; i < cnt; i++)
	{
		afterArr[i] = beforeArr[i] / bestScore * 100;

		sum += afterArr[i];
	}

	average = sum / cnt;

	cout << average;
}

