#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int fir, sec;

	cin >> fir;
	cin >> sec;

	vector<int> divisors;

	for (int i = 1; i <= fir; i++)
	{
		if (fir % i == 0)
		{
			divisors.push_back(i);
		}
	}

	if (divisors.size() < sec)
	{
		cout << "0";
	}
	else
	{
		cout << divisors[sec - 1];
	}
}