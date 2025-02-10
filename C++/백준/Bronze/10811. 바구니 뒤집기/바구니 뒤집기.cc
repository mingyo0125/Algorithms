#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int numsArr[100];
	int numsSize;
	int cnt;

	cin >> numsSize;
	cin >> cnt;

	for (int i = 1; i <= numsSize; i++)
	{
		numsArr[i] = i;
	}

	for (int i = 1; i <= cnt; i++)
	{
		int fir, sec;

		cin >> fir;
		cin >> sec;

		for (int j = 0; j <= (sec - fir) / 2; j++)
		{
			swap(numsArr[fir + j], numsArr[sec - j]);
		}
	}

	for (int i = 1; i <= numsSize; i++)
	{
		cout << numsArr[i] << " ";
	}

}

