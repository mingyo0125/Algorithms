#include <iostream>
using namespace std;

int main()
{
	int inputCnt;
	cin >> inputCnt;

	int cnt = 0;
	
	for (int i = 0; i < inputCnt; i++)
	{
		int input;
		cin >> input;

		bool isprime = true;

		if (input == 1) { continue; }

		for (int j = 1; j < input; j++)
		{
			if (input % j == 0 && j != 1 && j != input)
			{
				isprime = false;
			}
		}

		if (isprime) { cnt++; }
	}

	cout << cnt;
}