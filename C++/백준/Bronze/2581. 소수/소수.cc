#include <iostream>
using namespace std;

int main()
{
	int minInput, maxInput;
	cin >> minInput >> maxInput;

	int minPrime = 0;

	int arrSum = 0;

	for (int i = minInput; i <= maxInput; i++)
	{
		bool isprime = true;

		if (i <= 1) { continue; }

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isprime = false;
				break;
			}
		}

		if (isprime)
		{
			arrSum += i;
			if (minPrime == 0)
			{
				minPrime = i;
			}
		}
	}

	if (arrSum == 0)
	{
		cout << -1;
	}
	else
	{
		cout << arrSum << endl;
		cout << minPrime;
	}
}